/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aktomiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:51:22 by aktomiza          #+#    #+#             */
/*   Updated: 2023/08/09 16:51:24 by aktomiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = ft_strlen(s);
	while (i >= 0)
	{
		if (s[i] == (unsigned char)c)
			return ((char *)(s + i));
		i--;
	}
	return (NULL);
}
/*
int	main(void)
{
	const char	*s;
	int			c;

	s = "1230456-abc";
	c = '\0';
	for (int i; s[i]; i++)
	{
		printf("%d %p\n", i, &(s[i]));
	}
	printf("%p\n", ft_strrchr(s, c));
	printf("%p\n", strrchr(s, c));
}
*/