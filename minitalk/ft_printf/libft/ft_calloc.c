/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstablo <bstablo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/29 14:08:39 by bstablo           #+#    #+#             */
/*   Updated: 2022/12/08 15:45:25 by bstablo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	unsigned int		s;
	char				*ptr;

	if (SIZE_MAX / size < nmemb)
		return (NULL);
	s = nmemb * size;
	ptr = (char *)malloc(sizeof(char) * (s));
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, s);
	return (ptr);
}
