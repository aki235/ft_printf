/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aktomiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:51:50 by aktomiza          #+#    #+#             */
/*   Updated: 2023/08/09 16:51:51 by aktomiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_min(size_t a, size_t b)
{
	if (a < b)
		return (a);
	else
		return (b);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*res;
	size_t	s_len;

	if (!s)
		return (NULL);
	res = (char *)malloc(sizeof(char) * (ft_min(len, ft_strlen(s)) + 1));
	if (!res)
		return (NULL);
	s_len = ft_strlen(s);
	i = start;
	while (i < start + len && i < s_len)
	{
		res[i - start] = s[i];
		i++;
	}
	res[i - start] = '\0';
	return (res);
}
/*
int main(void)
{
  char  s[20] = "";
  int   start = 20;
  int   len = 100;
  printf("%s\n", ft_substr(s, start, len));
}
*/