/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pipex.c                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mberkenb <mberkenb@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/25 15:49:23 by mberkenb      #+#    #+#                 */
/*   Updated: 2022/01/25 17:33:36 by mberkenb      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include "pipex.h"
#include <fcntl.h>
#include <stdio.h>
#include <sys/types.h>

t_p	get_path(char **envp, t_p p)
{
	int	i;

	i = 0;
	p.path = 0;
	while (!p.path)
	{
		p.path = ft_strnstr(envp[i], "PATH=", 5);
		i++;
	}
	p.path = ft_substr_cmd(p.path, 5, ft_strlen(p.path), 1);
	if (p.path == 0)
		exit (1);
	return (p);
}

void	child_one(t_p p, char **envp, int *end)
{
	int		i;
	char	*cmd;

	i = 0;
	if (dup2(p.f1, STDIN_FILENO) < 0)
		exit (127);
	close(p.f1);
	if (dup2(end[1], STDOUT_FILENO) < 0)
		exit (127);
	close(end[0]);
	while (p.split_paths[i])
	{
		cmd = ft_strjoin(p.split_paths[i], p.cmd1_arr[0]);
		if (access(cmd, F_OK & X_OK) == 0)
			if (execve(cmd, p.cmd1_arr, envp) == -1)
				break ;
		free(cmd);
		i++;
	}
	exit (127);
}

void	child_two(t_p p, char **envp, int *end)
{
	int		i;
	char	*cmd;

	i = 0;
	if (dup2(end[0], STDIN_FILENO) < 0)
		exit (127);
	if (dup2(p.f2, STDOUT_FILENO) < 0)
		exit (127);
	close(end[1]);
	close(end[0]);
	while (p.split_paths[i])
	{
		cmd = ft_strjoin(p.split_paths[i], p.cmd2_arr[0]);
		if (access(cmd, F_OK & X_OK) == 0)
			if (execve(cmd, p.cmd2_arr, envp) == -1)
				break ;
		free(cmd);
		i++;
	}
	exit (127);
}

int	pipex(t_p p, char **envp)
{
	int		end[2];
	int		status;
	pid_t	child1;
	pid_t	child2;

	pipe(end);
	p = get_path(envp, p);
	p = parse_path(p);
	child1 = fork();
	if (child1 < 0)
		perror("FORK: ");
	if (child1 == 0)
		child_one(p, envp, end);
	child2 = fork();
	if (child2 < 0)
		perror("FORK: ");
	if (child2 == 0)
		child_two(p, envp, end);
	close (end[0]);
	close (end[1]);
	waitpid(child1, &status, 0);
	waitpid(child2, &status, 0);
	return (WEXITSTATUS(status));
}

int	main(int argc, char **argv, char **envp)
{
	t_p	p;
	int	status;
	int	i;

	if (argc != 5)
	{
		write (1, "Wrong number of arguments.\n", 27);
		return (1);
	}
	i = 3;
	p.f1 = open(argv[1], O_RDONLY);
	p.f2 = open(argv[argc - 1], O_CREAT | O_RDWR | O_TRUNC, 0644);
	if (p.f1 < 0 || p.f2 < 0)
		return (1);
	if (!*envp)
		exit (0);
	p.cmd1 = argv[2];
	p.cmd2 = argv[3];
	status = pipex(p, envp);
	return (status);
}
