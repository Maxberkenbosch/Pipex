/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   parsing.c                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: mberkenb <mberkenb@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/25 15:49:29 by mberkenb      #+#    #+#                 */
/*   Updated: 2022/01/25 17:37:17 by mberkenb      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "pipex.h"

t_p	parse_path(t_p p)
{
	int	i;

	i = 0;
	p.split_paths = ft_split(p.path, ':');
	if (p.split_paths == 0)
		exit (1);
	free (p.path);
	while (p.split_paths[i])
	{
		p.split_paths[i] = ft_strjoin(p.split_paths[i], "/");
		if (p.split_paths[i] == 0)
			exit (1);
		i++;
	}
	p.cmd1_arr = ft_split_cmd_test(p.cmd1, ' ');
	if (p.cmd1_arr == 0)
		exit (1);
	p.cmd2_arr = ft_split_cmd_test(p.cmd2, ' ');
	if (p.cmd1_arr == 0)
		exit (1);
	return (p);
}
