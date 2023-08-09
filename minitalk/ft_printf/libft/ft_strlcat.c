/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstablo <bstablo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:42:46 by bstablo           #+#    #+#             */
/*   Updated: 2022/12/09 00:01:41 by bstablo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	n;
	size_t	x;

	n = 0;
	x = 0;
	if (size == 0)
		return (ft_strlen((char *)src));
	while (dst[n] && n < size)
		n++;
	if (n == size && dst[n] != 0)
		return (size + (ft_strlen((char *)src)));
	while ((n + x) < (size - 1) && src[x])
	{
		dst[n + x] = src[x];
		x++;
	}
	dst[n + x] = 0;
	return (n + (ft_strlen((char *)src)));
}
