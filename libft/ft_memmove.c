/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aktomiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:46:17 by aktomiza          #+#    #+#             */
/*   Updated: 2023/08/09 16:46:19 by aktomiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (n == 0 || dst == src)
		return (dst);
	if (dst < src)
	{
		i = 0;
		while (i < n)
		{
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((char *)dst)[n - 1 - i] = ((char *)src)[n - 1 - i];
			i++;
		}
	}
	return (dst);
}
/*
int	main(void)
{
	char	*src;
	char	*dst;

	src = "abcd";
	dst = (char *)malloc(sizeof(char) * 5);

	printf("%s", ft_memmove(dst, src, 4));
}
*/