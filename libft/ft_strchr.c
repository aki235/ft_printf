/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aktomiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:49:02 by aktomiza          #+#    #+#             */
/*   Updated: 2023/08/09 16:49:04 by aktomiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == (unsigned char)c)
			return ((char *)(s + i));
		i++;
	}
	if (s[i] == (unsigned char)c)
		return ((char *)(s + i));
	return (NULL);
}
/*
int main(void)
{
	const char	*s;
	int			c;

	s = "libft-test-tokyo";
	c = 'l' + 256;
	for (int i; s[i]; i++)
	{
		printf("%d %p\n", i, &(s[i]));
	}
	printf("%p\n", ft_strchr(s, c));
	printf("%p\n", strchr(s, c));
}
*/