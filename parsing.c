#include "pipex.h"

t_p	parse_path(t_p p)
{
	int	i;

	i = 0;
	p.split_paths = ft_split(p.path, ':');
	free (p.path);
	while (p.split_paths[i])
	{
		p.split_paths[i] = ft_strjoin(p.split_paths[i], "/");
		i++;
	}
	p.cmd1_arr = ft_split_cmd_test(p.cmd1, ' ');
	p.cmd2_arr = ft_split_cmd_test(p.cmd2, ' ');
	return (p);
}
