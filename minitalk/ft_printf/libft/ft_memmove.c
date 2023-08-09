/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstablo <bstablo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:08:10 by bstablo           #+#    #+#             */
/*   Updated: 2022/12/08 15:41:20 by bstablo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	x;

	if (!dest && !src)
		return (NULL);
	if (dest > src)
	{
		while ((int)n > 0)
		{
			*(char *)(dest + n - 1) = *(char *)(src + n - 1);
			n--;
		}
	}
	else
	{
		x = 0;
		while (x < n)
		{
			*(char *)(dest + x) = *(char *)(src + x);
			x++;
		}
	}
	return (dest);
}
