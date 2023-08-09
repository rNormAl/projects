/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_itoa_ptr.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstablo <bstablo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/15 01:34:11 by bstablo           #+#    #+#             */
/*   Updated: 2023/08/09 19:31:10 by bstablo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_charlen_ptr(unsigned long long nbr, unsigned long long blen)
{
	unsigned long long	len;

	len = 0;
	if (nbr < 0)
	{
		len = 1;
		nbr = -nbr;
	}
	while (nbr >= blen)
	{
		len++;
		nbr = nbr / blen;
	}
	len++;
	return (len);
}

char	*ft_itoa_base_ptr(unsigned long long nbr, char *base_to)
{
	unsigned long long	blen;
	unsigned long long	len;
	char				*str;

	blen = ft_strlen(base_to);
	len = ft_charlen_ptr(nbr, blen);
	str = malloc(sizeof(char) * len + 1);
	str[len] = '\0';
	while (nbr >= blen)
	{
		len--;
		str[len] = base_to[nbr % blen];
		nbr = nbr / blen;
	}
	str[--len] = base_to[nbr];
	if (len == 1)
		str[0] = '-';
	return (str);
}
