/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_hex_up.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aktomiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 19:40:35 by aktomiza          #+#    #+#             */
/*   Updated: 2023/08/29 19:40:37 by aktomiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_hex_len(unsigned int x)
{
	int	res;

	res = 0;
	if (x == 0)
		return (1);
	while (x > 0)
	{
		x = x / 16;
		res++;
	}
	return (res);
}

void	ft_print_hex_write_low(unsigned int x)
{
	unsigned int	tmp;

	if (x >= 16)
	{
		ft_print_hex_write_low(x / 16);
		tmp = x % 16;
		if (tmp >= 10)
			ft_putchar_fd('a' + tmp - 10, 1);
		else
			ft_putchar_fd('0' + tmp, 1);
	}
	else
	{
		if (x >= 10)
			ft_putchar_fd('a' + x - 10, 1);
		else
			ft_putchar_fd('0' + x, 1);
	}
}

void	ft_print_hex_write_up(unsigned int x)
{
	unsigned int	tmp;

	if (x >= 16)
	{
		ft_print_hex_write_up(x / 16);
		tmp = x % 16;
		if (tmp >= 10)
			ft_putchar_fd('A' + tmp - 10, 1);
		else
			ft_putchar_fd('0' + tmp, 1);
	}
	else
	{
		if (x >= 10)
			ft_putchar_fd('A' + x - 10, 1);
		else
			ft_putchar_fd('0' + x, 1);
	}
}

int	ft_print_hex(unsigned int x, char ul)
{
	if (x == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	if (ul == 'x')
		ft_print_hex_write_low(x);
	else if (ul == 'X')
		ft_print_hex_write_up(x);
	return (ft_hex_len(x));
}
