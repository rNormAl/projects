/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstablo <bstablo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 17:26:13 by bstablo           #+#    #+#             */
/*   Updated: 2022/12/08 15:40:52 by bstablo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned int	x;
	char			*d;
	const char		*s;

	if (src == NULL && dst == NULL && n != 0)
		return (NULL);
	d = dst;
	s = src;
	x = 0;
	while (x < n)
	{
		d[x] = s[x];
		x++;
	}
	return (dst);
}
