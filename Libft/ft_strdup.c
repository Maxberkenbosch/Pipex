/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_strdup.c                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: mberkenb <mberkenb@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/25 16:17:40 by mberkenb      #+#    #+#                 */
/*   Updated: 2022/01/25 16:22:04 by mberkenb      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*ptr;
	char	*pptr;

	ptr = malloc ((ft_strlen(s) * sizeof(char) + 1));
	pptr = ptr;
	if (!ptr)
		return (0);
	while (*s)
	{
		*ptr = *s;
		ptr++;
		s++;
	}
	*ptr = '\0';
	return (pptr);
}
