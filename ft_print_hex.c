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

int	ft_hex_len(int x)
{
	int	res;

	res = 0;
	if (x < 0)
	{
		x = x * (-1);
		res++;
	}
	while (x > 0)
	{
		x = x / 16;
		res++;
	}
	return (res);
}

void	ft_print_hex_write_low(int x)
{
	int	tmp;

	if (n < 0)
	{
		x = x * (-1);
		ft_putchar_fd('-', 1);
	}
	if (x >= 16)
	{
		ft_print_hex_write_low(x / 16, 1);
		tmp = x % 16;
		if (tmp >= 10)
			ft_putchar_fd('a' + tmp - 10);
		else
			ft_putchar_fd('0' + tmp);
	}
	else
	{
		if (x >= 10)
			ft_putchar_fd('a' + x - 10);
		else
			ft_putchar_fd('0' + x);
	}
}

void	ft_print_hex_write_up(int x)
{
	int	tmp;

	if (n < 0)
	{
		x = x * (-1);
		ft_putchar_fd('-', 1);
	}
	if (x >= 16)
	{
		ft_print_hex_write_up(x / 16, 1);
		tmp = x % 16;
		if (tmp >= 10)
			ft_putchar_fd('A' + tmp - 10);
		else
			ft_putchar_fd('0' + tmp);
	}
	else
	{
		if (x >= 10)
			ft_putchar_fd('A' + x - 10);
		else
			ft_putchar_fd('0' + x);
	}
}

int	ft_print_hex(int x, char ul)
{
	if (n == 0)
	{
		ft_putchar_fd('0', 1);
		return (1);
	}
	else if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", 1);
		return (11);
	}
	if (ul == 'x')
		ft_print_hex_write_low(x);
	else if (ul == 'X')
		ft_print_hex_write_up(x);
	return (ft_hex_len);
}
