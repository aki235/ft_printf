/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aktomiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 14:45:35 by aktomiza          #+#    #+#             */
/*   Updated: 2023/08/29 14:45:38 by aktomiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>
# include <stdio.h>
# include <stdint.h>

# include "./libft/libft.h"

int	ft_printf(const char *format, ...);
int	check_format(va_list args, const char *format);

int	ft_print_char(int c);
int	ft_print_str(char *s);
int	ft_print_ptr(uintptr_t num);
int	ft_print_int(int d);
int	ft_print_uint(unsigned int n);
int	ft_print_hex(unsigned int x, char ul);
int	ft_print_percent(void);

#endif
