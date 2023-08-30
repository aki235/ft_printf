/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aktomiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:46:29 by aktomiza          #+#    #+#             */
/*   Updated: 2023/08/09 16:46:32 by aktomiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *buf, int ch, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)(buf + i) = (unsigned char)ch;
		i++;
	}
	return (buf);
}
/*
int	main(void)
{
	memset(NULL, 'a', 5);
	ft_memset(NULL, 'a', 5);
}
*/