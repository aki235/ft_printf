/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aktomiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:51:14 by aktomiza          #+#    #+#             */
/*   Updated: 2023/08/09 16:51:16 by aktomiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	if (!needle[0])
		return ((char *)haystack);
	if (len == 0)
		return (NULL);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (haystack[i + j] && needle[j] && i + j < len \
		&& haystack[i + j] == needle[j])
			j++;
		if (needle[j] == '\0')
			return ((char *)(haystack + i));
		i++;
	}
	return (NULL);
}
/*
int main(void)
{
	//char haystack[30] = "aaabcabcd";
	//char needle[10] = "aabc";
	char *haystack = "abcdefg";
	char needle[10] = "";
	size_t len = 0;

	printf("%s\n", ft_strnstr(haystack, needle, len));
	printf("%s\n", strnstr(haystack, needle, len));
}
*/