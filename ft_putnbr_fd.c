/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 14:37:30 by gykoh             #+#    #+#             */
/*   Updated: 2023/05/14 19:29:45 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	write_recur(long long number, int fd)
{
	char	char_num;

	if (number < 0)
	{
		write (fd, "-", 1);
		number *= -1;
		write_recur(number, fd);
	}
	else if (number >= 10)
	{
		write_recur(number / 10, fd);
		write_recur(number % 10, fd);
	}
	else
	{
		char_num = number + '0';
		write (fd, &char_num, 1);
	}
}

void	ft_putnbr_fd(int n, int fd)
{
	write_recur((long long)n, fd);
}
