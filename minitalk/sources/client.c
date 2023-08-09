/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstablo <bstablo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 19:02:35 by bstablo           #+#    #+#             */
/*   Updated: 2023/08/09 20:22:41 by bstablo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minitalk.h"

int	ft_atoi(const char *str)
{
	int	nb;
	int	signe;
	int	n;

	nb = 0;
	n = 0;
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
	while (str[n] != '\0' && (str[n] > 47 && str[n] < 58))
	{
		nb = nb * 10 + str[n] - '0';
		n++;
	}
	if (nb)
		return (nb * signe);
	else
		return (0);
}

void	ft_putchar_sig(int pid, char c)
{
	int	bit;

	bit = 0;
	while (bit < 8)
	{
		if ((c & (1 << bit)))
			kill(pid, SIGUSR1);
		else
			kill(pid, SIGUSR2);
		usleep(150);
		bit++;
	}
}

void	ft_putstr_sig(int pid, char *str)
{
	int	n;

	n = 0;
	while (str[n])
	{
		ft_putchar_sig(pid, str[n]);
		n++;
	}
	ft_putchar_sig(pid, '\n');
	ft_putchar_sig(pid, '\0');
	usleep(100);
	ft_printf("Message sent successfully!\n");
}

int	main(int argc, char **argv)
{
	int	pid;

	if (argc != 3)
	{
		ft_printf("Invalid number of arguments\n");
		ft_printf("Use it like: ./client <PID> <STRING>.\n");
		return (0);
	}
	pid = ft_atoi(argv[1]);
	if (kill(pid, 0) != 0 || pid < 0)
	{
		ft_printf("Bad PID.\n");
		return (0);
	}
	ft_putstr_sig(pid, argv[2]);
}
