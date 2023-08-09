/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstablo <bstablo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:44:27 by bstablo           #+#    #+#             */
/*   Updated: 2022/12/09 00:04:35 by bstablo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	n;

	n = -1;
	if (!dst || size < 1)
		return (ft_strlen((char *)src));
	if (size)
		while (++n < size - 1 && src[n])
			dst[n] = src[n];
	dst[n] = '\0';
	n = 0;
	while (src[n])
		n++;
	return (n);
}
