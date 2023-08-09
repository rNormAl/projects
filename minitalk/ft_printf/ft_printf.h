/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstablo <bstablo@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/14 17:58:14 by bstablo           #+#    #+#             */
/*   Updated: 2023/06/12 10:53:18 by bstablo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>
# include "libft/libft.h"

int		ft_printf(const char *str, ...);
int		ft_putnbr_uint(unsigned int n);
int		ft_putnbr_int_hexa(int n, char *base);
int		ft_putnbr_int(int n);
int		ft_printchar(int c);
int		ft_printstr(char *str);
int		ft_putnbr_ptr(unsigned long long n, char *base);
char	*ft_itoa_base(int nbr, char *base_to);
int		ft_printstr(char *str);
char	*ft_uitoa_base(unsigned int nbr, char *base_to);
char	*ft_itoa_base_ptr(unsigned long long nbr, char *base_to);

#endif
