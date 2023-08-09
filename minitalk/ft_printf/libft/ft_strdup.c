/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstablo <bstablo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:45:35 by bstablo           #+#    #+#             */
/*   Updated: 2022/12/07 17:14:44 by bstablo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(char *src)
{
	int		n;
	int		lon;
	char	*str;

	n = 0;
	lon = 0;
	while (src[lon])
		lon++;
	str = (char *)malloc(sizeof(char) * lon + 1);
	if (str == NULL)
		return (NULL);
	while (src[n])
	{
		str[n] = src[n];
		n++;
	}
	str[n] = '\0';
	return (str);
}
