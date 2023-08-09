/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstablo <bstablo@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 15:35:52 by bstablo           #+#    #+#             */
/*   Updated: 2022/11/24 16:12:01 by bstablo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *str, int n)
{
	int	cpt;

	cpt = 0;
	while (str[cpt])
	{
		if (str[cpt] == (char) n)
			return ((char *)str + cpt);
		cpt++;
	}
	if (str[cpt] == (char) n)
		return ((char *)str + cpt);
	return (NULL);
}
