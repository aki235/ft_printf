/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aktomiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:45:29 by aktomiza          #+#    #+#             */
/*   Updated: 2023/08/09 16:45:31 by aktomiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *b1, const void *b2, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		if (*(unsigned char *)(b1 + i) != *(unsigned char *)(b2 + i))
			return (*(unsigned char *)(b1 + i) - *(unsigned char *)(b2 + i));
		i++;
	}
	return (0);
}
