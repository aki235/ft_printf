/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aktomiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:48:08 by aktomiza          #+#    #+#             */
/*   Updated: 2023/08/09 16:48:11 by aktomiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr_check(int n, int fd)
{
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return (1);
	}
	else if (n == 0)
	{
		ft_putchar_fd('0', fd);
		return (1);
	}
	return (0);
}

void	ft_putnbr_fd(int n, int fd)
{
	if (ft_putnbr_check(n, fd))
		return ;
	if (n < 0)
	{
		n = n * (-1);
		ft_putchar_fd('-', fd);
	}
	if (n >= 10)
	{
		ft_putnbr_fd(n / 10, fd);
		ft_putchar_fd('0' + (n % 10), fd);
	}
	else if (n <= 9)
	{
		ft_putchar_fd('0' + n, fd);
		return ;
	}
}
/*
int	main(void)
{
	ft_putnbr_fd(123, 1);
}
*/