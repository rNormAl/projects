/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstablo <bstablo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 20:05:08 by bstablo           #+#    #+#             */
/*   Updated: 2022/12/07 17:34:41 by bstablo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	int		n;

	n = 0;
	if (!s || !f)
		return (NULL);
	str = (char *)malloc(sizeof(char) * (ft_strlen((char *) s) + 1));
	if (str == NULL)
		return (NULL);
	while (s[n])
	{
		str[n] = (*f)(n, s[n]);
		n++;
	}
	str[n] = '\0';
	return (str);
}
