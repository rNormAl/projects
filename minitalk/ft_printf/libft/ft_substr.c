/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstablo <bstablo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 15:40:47 by bstablo           #+#    #+#             */
/*   Updated: 2022/12/12 19:10:35 by bstablo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*ns;
	size_t	n;
	size_t	x;

	if (ft_strlen(s) <= start)
	{
		ns = malloc(1);
		if (ns == NULL)
			return (NULL);
		ns[0] = '\0';
		return (ns);
	}
	if (ft_strlen(s) - start < len && ft_strlen(s) > 0)
		ns = (char *)malloc(sizeof(char) * (ft_strlen(s) - start + 1));
	else
		ns = (char *)malloc(sizeof(char) * (len + 1));
	if (ns == NULL)
		return (NULL);
	n = 0;
	x = 0;
	while (s[n++])
		if (n - 1 >= start && x < len)
			ns[x++] = s[n - 1];
	ns[x] = '\0';
	return (ns);
}
