/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstablo <bstablo@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/13 21:17:44 by bstablo           #+#    #+#             */
/*   Updated: 2023/06/12 10:57:32 by bstablo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(va_list *args, const char c)
{
	int	res;

	res = 0;
	if (c == 'c')
		res += ft_printchar(va_arg(*args, int));
	else if (c == 's')
		res += ft_printstr(va_arg(*args, char *));
	else if (c == 'p')
		res += ft_putnbr_ptr(va_arg
				(*args, unsigned long long), "0123456789abcdef");
	else if (c == 'd' || c == 'i')
		res += ft_putnbr_int(va_arg(*args, int));
	else if (c == 'u')
		res += ft_putnbr_uint(va_arg(*args, unsigned int));
	else if (c == 'x')
		res += ft_putnbr_int_hexa(va_arg
				(*args, unsigned int), "0123456789abcdef");
	else if (c == 'X')
		res += ft_putnbr_int_hexa(va_arg
				(*args, unsigned int), "0123456789ABCDEF");
	else if (c == '%')
		res += ft_printchar('%');
	return (res);
}

int	ft_printf(const char *str, ...)
{
	int		n;
	va_list	args;
	int		res;

	res = 0;
	n = 0;
	va_start(args, str);
	while (str[n])
	{
		if (str[n] == '%')
		{
			res += ft_format(&args, str[n + 1]);
			n++;
		}
		else
			res += ft_printchar(str[n]);
		n++;
	}
	va_end(args);
	return (res);
}
