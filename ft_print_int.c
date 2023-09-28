/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_int.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aktomiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/29 19:43:07 by aktomiza          #+#    #+#             */
/*   Updated: 2023/08/29 19:43:12 by aktomiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_print_int(int d)
{
	char	*str;
	int		res;

	ft_putnbr_fd(d, 1);
	str = ft_itoa(d);
	res = ft_strlen(str);
	free(str);
	return (res);
}
