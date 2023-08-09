/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstablo <bstablo@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 15:35:52 by bstablo           #+#    #+#             */
/*   Updated: 2022/11/26 15:27:40 by bstablo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int n)
{
	int	cpt;

	cpt = 0;
	while (str[cpt])
		cpt++;
	while (cpt > 0)
	{
		if (str[cpt] == (char) n)
			return ((char *)str + cpt);
		cpt--;
	}
	if (str[cpt] == (char) n)
		return ((char *)str + cpt);
	return (NULL);
}
