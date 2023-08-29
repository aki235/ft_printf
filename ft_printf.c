/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aktomiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:45:16 by aktomiza          #+#    #+#             */
/*   Updated: 2023/08/29 14:45:19 by aktomiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	check_format(va_list args, const char *format)
{
	if (*format == 'c')
		ft_putchar_fd(va_arg(args, int), 1);
	else if (*format == 's')
		ft_put
}

int	ft_printf(const char *format, ...)
{
	va_list	args;
	int		res;
	int		tmp;

	va_start(args, format);
	res = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{
			if (!*(++format))
				return (0);//%の次が終端
			tmp = check_format(args, format);
			if (tmp == -1)
				return (-1);//%の次にcspdiuxX以外が来た場合
			res += tmp;
			format++;
		}
		else
		{
			ft_putchar_fd(*format, 1);
			format++;
			res++;
		}
	}
	va_end(args);
	return (0);
}
