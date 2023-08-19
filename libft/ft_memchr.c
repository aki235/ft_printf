/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aktomiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:45:19 by aktomiza          #+#    #+#             */
/*   Updated: 2023/08/09 16:45:22 by aktomiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *buf, int ch, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(buf + i) == (unsigned char)ch)
			return ((void *)(buf + i));
		i++;
	}
	return (NULL);
}
/*
int main(void)
{
	char buf[] = "A5BCD5EFGH";
	char ch = '5';
	for (int i = 0; buf[i]; i++)
	{
		printf("%d: %p\n", i, &buf[i]);
	}
	printf("%p", ft_memchr(buf, ch, sizeof(char) * strlen(buf)));
}
*/