/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstablo <bstablo@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/07 17:08:15 by bstablo           #+#    #+#             */
/*   Updated: 2022/12/07 17:09:48 by bstablo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_is_set(char c, const char *set)
{
	int	n;

	n = 0;
	while (set[n] != '\0')
	{
		if (set[n] == c)
			return (1);
		n++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*s;
	size_t	n_start;
	size_t	n_end;
	size_t	len;

	n_start = 0;
	n_end = 0;
	len = ft_strlen(s1) - 1;
	if ((int)len == -1)
		len = 0;
	while (s1[n_start] != '\0' && ft_is_set(s1[n_start], set) == 1)
		n_start++;
	while (len >= n_start && ft_is_set(s1[len--], set) == 1)
		n_end++;
	s = (char *)malloc(sizeof(char) * (ft_strlen(s1) - (n_end + n_start)) + 1);
	if (s == NULL)
		return (NULL);
	len = 0;
	while (len < (ft_strlen(s1) - (n_end + n_start)))
	{
		s[len] = (char)s1[len + n_start];
		len++;
	}
	s[len] = '\0';
	return (s);
}
