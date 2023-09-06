/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aktomiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 19:43:41 by aktomiza          #+#    #+#             */
/*   Updated: 2023/08/29 19:43:44 by aktomiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_ptr_len(uintptr_t num)
{
	int	res;

	if (num == 0)
		return (1);
	res = 0;
	while (res > 0)
	{
		num = num / 16;
		res++;
	}
	return (res);
}

void	ft_print_ptr_write(uintptr_t num)
{
	uintptr_t	tmp;

	if (num >= 16)
	{
		ft_print_ptr_write(num / 16);
		tmp = num % 16;
		if (tmp >= 10)
			ft_putchar_fd('a' + tmp - 10, 1);
		else if (9 >= tmp)
			ft_putchar_fd('0' + tmp, 1);
	}
	else if (15 >= num)
	{
		if (num >= 10)
			ft_putchar_fd('a' + num - 10, 1);
		else if (9 >= num)
			ft_putchar_fd('0' + num, 1);
	}
}

int	ft_print_ptr(uintptr_t num)
{
	ft_print_ptr_write(num);
	return (ft_ptr_len(num));
}
