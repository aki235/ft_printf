/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aktomiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:44:55 by aktomiza          #+#    #+#             */
/*   Updated: 2023/08/09 16:44:58 by aktomiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_abs(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

int	ft_intlen(int n)
{
	int	i;

	n = ft_abs(n);
	i = 1;
	while (n >= 10)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

void	ft_strrev(char *str)
{
	int		i;
	char	tmp;
	int		l;

	i = 0;
	l = ft_strlen(str);
	while (i < l / 2)
	{
		tmp = str[i];
		str[i] = str[l - 1 - i];
		str[l - 1 - i] = tmp;
		i++;
	}
}

char	*ft_itoa(int n)
{
	char	*str;
	int		is_neg;
	int		i;

	is_neg = (n < 0);
	str = (char *)malloc(sizeof(char) * (ft_intlen(n) + 1 + is_neg));
	if (!str)
		return (NULL);
	i = 0;
	if (n == 0)
		str[i++] = '0';
	while (n != 0)
	{
		str[i] = ft_abs(n % 10) + '0';
		n = n / 10;
		i++;
	}
	if (is_neg)
		str[i++] = '-';
	str[i] = '\0';
	ft_strrev(str);
	return (str);
}
/*
int main(void)
{
    int     i;
    char    *s;

    i = -2147483648;
    s = ft_itoa(i);
    printf("%s", s);
}
*/