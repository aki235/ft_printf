#include "ft_printf.h"

int	ft_printf0(const char *format, ...)
{
	va_list	args;

	va_start(args, format);
	while (*format != '\0')
	{
		if (*format == '%')
		{
			if (!*(++format))
				return (0);
			if (*format == 'c')
				ft_putchar_fd(va_arg(args, int), 1);
			else if (*format == 's')
				ft_putstr_fd(va_arg(args, char *), 1);
			else
				return (-1);
			format++;
		}
		else
		{
			ft_putchar_fd(*format, 1);
			format++;
		}
	}
	va_end(args);
	return (0);
}
