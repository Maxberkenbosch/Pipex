/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   pipex.h                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: mberkenb <mberkenb@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/25 15:50:49 by mberkenb      #+#    #+#                 */
/*   Updated: 2022/01/25 15:50:50 by mberkenb      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef PIPEX_H
# define PIPEX_H

# include "./Libft/libft.h"

typedef struct s_p
{
	int		f1;
	int		f2;
	char	*cmd1;
	char	*cmd2;
	char	**cmd1_arr;
	char	**cmd2_arr;
	char	*path;
	char	*temp_path;
	char	**split_paths;
}	t_p;

//parsing
t_p		parse_path(t_p p);

//split test
char	**ft_split_cmd_test(char const *s, char c);

//substr
char	*ft_substr_cmd(char const *s, unsigned int start, size_t len, int f);

#endif