/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   substr_cmd.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mberkenb <mberkenb@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/25 15:49:42 by mberkenb      #+#    #+#                 */
/*   Updated: 2022/01/25 15:49:43 by mberkenb      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "pipex.h"

char	*ft_substr_cmd(char const *s, unsigned int start, size_t len, int f)
{
	char	*sub;
	int		i;

	if (!s)
		return (0);
	if (start >= ft_strlen(s))
		return (ft_strdup("\0"));
	if (len > ft_strlen(s) - start)
		return (ft_strdup(s + start));
	sub = malloc ((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	i = 0;
	while (s[start] && len > 0)
	{
		if (s[start] == '\'')
			start++;
		len--;
		sub[i++] = s[start++];
	}
	sub[i] = '\0';
	if (f)
		free((void *)s);
	return (sub);
}
