/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstablo <bstablo@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 19:32:26 by bstablo           #+#    #+#             */
/*   Updated: 2022/12/05 19:32:41 by bstablo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	n;
	int	nb;
	int	signe;

	n = 0;
	nb = 0;
	signe = 1;
	while (str[n] == ' ' || str[n] == '\t' || str[n] == '\r'
		|| str[n] == '\n' || str[n] == '\v' || str[n] == '\f')
		n++;
	if (str[n] == '-' || str[n] == '+')
	{
		if (str[n] == '-')
			signe *= -1;
		n++;
	}
	while (str[n] >= '0' && str[n] <= '9')
	{
		nb = nb * 10 + (str[n] - 48);
		n++;
	}
	if (nb)
		return (nb * signe);
	return (0);
}
