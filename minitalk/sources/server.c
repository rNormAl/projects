/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   server.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstablo <bstablo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/27 15:34:46 by bstablo           #+#    #+#             */
/*   Updated: 2023/08/09 19:04:22 by bstablo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/minitalk.h"

int g_msg_received = 0;

void    ft_get_sig(int sig)
{
    static char    cchar;
    static int    bit;
    static char    *str;
    char        *tmp;

    tmp = malloc(sizeof(char) + 1);
    if (sig == SIGUSR1)
        cchar |= (1 << bit);
    bit += 1;
    if (bit == 8)
    {
        tmp[0] = cchar;
        str = ft_strjoin(str, tmp);
        if (cchar == '\0')
        {
            ft_printf("%s", str);
            free(str);
        }
        free(tmp);
        cchar = 0;
        bit = 0;
    }
	usleep(100);
}

int	main(void)
{
	int	run;

	run = 1;
	ft_printf("Server's PID: %d\n", getpid());
	while (run == 1)
	{
		signal(SIGUSR1, ft_get_sig);
		signal(SIGUSR2, ft_get_sig);
		usleep(100);
		if (g_msg_received)
    	{
    		run = 0;
			g_msg_received = 0;
   		}
	}
}
