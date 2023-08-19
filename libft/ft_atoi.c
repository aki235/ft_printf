/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aktomiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:35:56 by aktomiza          #+#    #+#             */
/*   Updated: 2023/08/09 16:36:05 by aktomiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_detect_head(char c)
{
	if (c == ' ' || c == '\t' || c == '\v')
		return (1);
	if (c == '\n' || c == '\r' || c == '\f')
		return (1);
	return (0);
}

int	ft_det_of(size_t res, const char *str, int i, int minus)
{
	size_t	ov_div;
	int		ov_mod;

	ov_div = 922337203685477580;
	if (minus == 1)
		ov_mod = 7;
	else
		ov_mod = 8;
	if (res > ov_div)
		return (ov_mod);
	else if (res == ov_div)
	{
		if (str[i] - '0' > ov_mod)
			return (ov_mod);
	}
	return (0);
}

int	ft_atoi(const char *str)
{
	int		i;
	size_t	res;
	int		minus;

	i = 0;
	res = 0;
	minus = 1;
	while (ft_detect_head(str[i]))
		i++;
	if (str[i] == '-')
		minus = -1;
	if (str[i] == '-' || str[i] == '+')
		i++;
	while ('0' <= str[i] && str[i] <= '9')
	{
		if (ft_det_of(res, str, i, minus))
			return (ft_det_of(res, str, i, minus) - 8);
		res = res * 10 + (str[i] - '0');
		i++;
	}
	return (res * minus);
}
