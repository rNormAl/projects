/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstablo <bstablo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 20:25:47 by bstablo           #+#    #+#             */
/*   Updated: 2022/12/12 00:49:01 by bstablo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	n;
	size_t	x;

	n = 0;
	if (needle[n] == '\0')
		return ((char *)haystack);
	while (haystack[n] != '\0' && n < len)
	{
		if (haystack[n] == needle[0])
		{
			x = 0;
			while (needle[x] != '\0' && haystack[n + x] != '\0' && (n + x) < len
				&& haystack[n + x] == needle[x])
				x++;
			if (needle[x] == '\0')
				return ((char *)haystack + n);
		}
		n++;
	}
	return (0);
}
