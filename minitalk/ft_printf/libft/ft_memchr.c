/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstablo <bstablo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 18:36:13 by bstablo           #+#    #+#             */
/*   Updated: 2022/12/08 15:39:30 by bstablo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t		x;
	char		*str;

	x = 0;
	str = (void *)s;
	while (n > x)
	{
		if (str[x] == (char)c)
			return (&str[x]);
		x++;
	}
	return (NULL);
}
