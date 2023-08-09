/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_itoa.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstablo <bstablo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 22:52:16 by bstablo           #+#    #+#             */
/*   Updated: 2023/08/09 19:34:11 by bstablo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_charlen(int nbr, int blen)
{
	int	len;

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

int	ft_ucharlen(unsigned int nbr, unsigned int blen)
{
	unsigned int	len;

	len = 0;
	while (nbr >= blen)
	{
		len++;
		nbr = nbr / blen;
	}
	len++;
	return (len);
}

char	*ft_itoa_base(int nbr, char *base_to)
{
	int		blen;
	int		len;
	char	*str;

	blen = ft_strlen(base_to);
	len = ft_charlen(nbr, blen);
	str = malloc(sizeof(char) * len + 1);
	str[len] = '\0';
	if (nbr < 0)
		nbr = -nbr;
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

char	*ft_uitoa_base(unsigned int nbr, char *base_to)
{
	unsigned int	blen;
	unsigned int	len;
	char			*str;

	blen = ft_strlen(base_to);
	len = ft_ucharlen(nbr, blen);
	str = malloc(sizeof(char) * len + 1);
	str[len] = '\0';
	if (nbr < 0)
		nbr = -nbr;
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
