/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aktomiza <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/09 16:49:55 by aktomiza          #+#    #+#             */
/*   Updated: 2023/08/09 16:49:57 by aktomiza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*ret;
	size_t	i;
	size_t	len_s1;

	if (!s1 || !s2)
		return (NULL);
	ret = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!ret)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		ret[i] = s1[i];
		i++;
	}
	len_s1 = ft_strlen(s1);
	while (s2[i - len_s1])
	{
		ret[i] = s2[i - len_s1];
		i++;
	}
	ret[i] = '\0';
	return (ret);
}

/* int	main(void)
{
	char	s1[20] = "abcd";
	char	s2[20] = "123";
	printf("%s", ft_strjoin(s1, s2));
} */