/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aktomiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:51:41 by aktomiza          #+#    #+#             */
/*   Updated: 2023/08/09 16:51:43 by aktomiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_inchar(char c, char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;
	size_t	i;
	char	*trim;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	while (s1[start] && ft_inchar(s1[start], (char *)set))
		start++;
	end = ft_strlen(s1);
	while (end > start && ft_inchar(s1[end - 1], (char *)set))
		end--;
	trim = (char *)malloc(sizeof(char) * (end - start + 1));
	if (!trim)
		return (NULL);
	i = start;
	while (i < end)
	{
		trim[i - start] = (char)(s1[i]);
		i++;
	}
	trim[i - start] = '\0';
	return (trim);
}

/* int	main(void)
{
	char	s1[20] = "ab2ba2bb";
	char	s2[20] = "ab";
	printf("%s", ft_strtrim(s1, s2));
} */