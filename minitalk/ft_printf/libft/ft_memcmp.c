/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstablo <bstablo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:50:44 by bstablo           #+#    #+#             */
/*   Updated: 2022/12/08 15:43:14 by bstablo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t size)
{
	unsigned char	*str1;
	unsigned char	*str2;
	size_t			n;

	n = 0;
	str1 = (unsigned char *) s1;
	str2 = (unsigned char *) s2;
	if (size == 0)
		return (0);
	while (n < (size - 1) && *str1 == *str2)
	{
		str1++;
		str2++;
		n++;
	}
	if (*str1 != *str2 && size != 0)
		return (*str1 - *str2);
	return (0);
}
