/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_uint.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aktomiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 19:44:20 by aktomiza          #+#    #+#             */
/*   Updated: 2023/08/29 19:44:22 by aktomiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_uint_len(unsigned int n)
{
	int	res;

	res = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n = n / 10;
		res++;
	}
	return (res);
}

void	ft_print_uint_write(unsigned int n)
{
	if (n >= 10)
	{
		ft_print_uint_write(n / 10);
		ft_putchar_fd('0' + (n % 10), 1);
	}
	else if (n <= 9)
	{
		ft_putchar_fd('0' + n, 1);
		return ;
	}
}

int	ft_print_uint(unsigned int n)
{
	ft_print_uint_write(n);
	return (ft_uint_len(n));
}
