/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aktomiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:50:11 by aktomiza          #+#    #+#             */
/*   Updated: 2023/08/09 16:50:13 by aktomiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strnlen(const char *s, size_t maxlen)
{
	size_t	len;

	len = 0;
	while (len < maxlen)
	{
		if (!(*s))
			break ;
		len++;
		s++;
	}
	return (len);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_size;
	size_t	src_size;
	size_t	i;

	src_size = ft_strlen(src);
	dst_size = ft_strnlen(dst, size);
	i = 0;
	if (dst_size <= size - 1 && size > 0)
	{
		while (src[i] && i + dst_size < size - 1)
		{
			dst[i + dst_size] = src[i];
			i++;
		}
		dst[i + dst_size] = '\0';
		return (dst_size + src_size);
	}
	return (size + src_size);
}
/*
int main(void)
{
	char src[5] = "abc";
	char dst[20] = "123";

	printf("%zu\n", ft_strlcat(NULL, src, 0));
	//printf("%s", dst);
}
*/
