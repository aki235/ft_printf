/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aktomiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:48:37 by aktomiza          #+#    #+#             */
/*   Updated: 2023/08/09 16:48:40 by aktomiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	how_many_c(char const *s, char c)
{
	size_t	res;
	size_t	i;

	res = 0;
	if (s[0] != c)
		res++;
	i = 1;
	while (s[i - 1] && s[i])
	{
		if (s[i - 1] == c && s[i] != c)
			res++;
		i++;
	}
	return (res + 1);
}

char	**ft_malloc_res(char const *s, char c)
{
	char	**res;

	res = (char **)malloc(sizeof(char *) * how_many_c(s, c));
	if (!res)
		return (NULL);
	return (res);
}

void	*ft_split_free(char **res)
{
	char	**res2;

	res2 = res;
	while (*res)
	{
		free(*res);
		res++;
	}
	free(res2);
	return (NULL);
}

char	**ft_split0(char const *s, char c, char **res)
{
	char	**res2;
	size_t	start;
	size_t	end;

	res2 = res;
	end = 0;
	while (1)
	{
		start = end;
		while (s[start] == c && s[start])
			start++;
		if (!s[start])
			break ;
		end = start;
		while (s[end] != c && s[end])
			end++;
		*res2 = ft_substr(s, start, end - start);
		if (!(*res2))
			return (ft_split_free(res));
		res2++;
	}
	*res2 = NULL;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**split;

	if (!s)
		return (NULL);
	split = ft_malloc_res(s, c);
	if (!split)
		return (NULL);
	split = ft_split0(s, c, split);
	if (!split)
		return (NULL);
	return (split);
}

/* int	main(void)
{
	const char s1[20] = "xxabcxxbcxxaaa";
	char c = 'x';

	char **s;
	s = ft_split(s1, c);
	
	for (int i = 0; s[i]; i++)
	{
		printf("%s\n", s[i]);
	}
} */