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

int	ft_print_char(int c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	check_format(va_list args, const char *format)
{
	int	print_len;

	print_len = 0;
	if (*format == 'c')
		print_len += ft_print_char(va_arg(args, int));
	else if (*format == 's')
		print_len += ft_print_str(va_arg(args, char *));
	else if (*format == 'p')
		print_len += ft_print_ptr(va_arg(args, uintptr_t));
	else if (*format == 'd' || *format == 'i')
		print_len += ft_print_int(va_arg(args, int));
	else if (*format == 'u')
		print_len += ft_print_uint(va_arg(args, unsigned int));
	else if (*format == 'x')
		print_len += ft_print_hex(va_arg(args, unsigned int), *format);
	else if (*format == 'X')
		print_len += ft_print_hex(va_arg(args, unsigned int), *format);
	else if (*format == '%')
		print_len += ft_print_percent();
	else
		return (-1);
	return (print_len);
}

int	ft_printf(const char *format, ...)
{
	int		print_len;
	va_list	args;

	va_start(args, format);
	print_len = 0;
	while (*format != '\0')
	{
		if (*format == '%')
		{
			if (*(++format) == '\0')
				break ;
			if (check_format(args, format) == -1)
				return (-1);
			print_len += check_format(args, format);
			format++;
		}
		else
		{
			ft_putchar_fd(*format, 1);
			print_len++;
			format++;
		}
	}
	va_end(args);
	return (print_len);
}
