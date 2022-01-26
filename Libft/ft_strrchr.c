/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strrchr.c                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: mberkenb <mberkenb@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/25 16:18:24 by mberkenb      #+#    #+#                 */
/*   Updated: 2022/01/25 16:22:26 by mberkenb      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	unsigned char	charc;
	int				strl;

	charc = c;
	if (c == 0)
		return (ft_strchr(s, '\0'));
	strl = ft_strlen(s);
	if (strl == 0)
		return (0);
	while (strl - 1)
	{
		if (s[strl] == charc)
			return ((char *)&s[strl]);
		else
			strl--;
	}
	if (*s == charc)
		return ((char *)s);
	return (NULL);
}
