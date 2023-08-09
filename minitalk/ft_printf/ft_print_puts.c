/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_puts.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstablo <bstablo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 22:52:23 by bstablo           #+#    #+#             */
/*   Updated: 2023/06/05 19:00:48 by bstablo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_int(int n)
{
	int		res;
	char	*nbr;

	res = 0;
	if (n == -2147483648)
		return (ft_printstr("-2147483648"));
	else
		nbr = ft_itoa_base(n, "0123456789");
	res = ft_printstr(nbr);
	free(nbr);
	return (res);
}

int	ft_putnbr_uint(unsigned int n)
{
	unsigned int	res;
	char			*nbr;

	res = 0;
	nbr = ft_uitoa_base(n, "0123456789");
	res = ft_printstr(nbr);
	free(nbr);
	return (res);
}

int	ft_putnbr_int_hexa(int n, char *base)
{
	int		res;
	char	*nbr;

	res = 0;
	nbr = ft_uitoa_base(n, base);
	res = ft_printstr(nbr);
	free(nbr);
	return (res);
}

int	ft_putnbr_ptr(unsigned long long n, char *base)
{
	unsigned long long	res;
	char				*nbr;

	res = 2;
	write (1, "0x", 2);
	if (n == 0)
	{
		write (1, "0", 1);
		return (res + 1);
	}
	nbr = ft_itoa_base_ptr(n, base);
	res += ft_printstr(nbr);
	free(nbr);
	return (res);
}
