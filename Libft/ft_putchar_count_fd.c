/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   ft_putchar_count_fd.c                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: mberkenb <mberkenb@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/01/25 16:16:52 by mberkenb      #+#    #+#                 */
/*   Updated: 2022/01/25 16:20:24 by mberkenb      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_putchar_count_fd(char c, int fd, int total)
{
	total += write(fd, &c, 1);
	return (total);
}
