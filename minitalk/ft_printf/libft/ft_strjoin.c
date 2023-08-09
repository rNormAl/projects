/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bstablo <bstablo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/05 20:30:19 by bstablo           #+#    #+#             */
/*   Updated: 2023/08/03 15:43:22 by bstablo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strjoin(char *s1, char *s2)
{
    int        n;
    int        x;
    int        len;
    char    *cat;

    if (!s1)
    {
        s1 = malloc(1);
        s1[0] = '\0';
    }
    len = ft_strlen(s1) + ft_strlen(s2);
    cat = malloc(sizeof(char) * (len + 1));
    if (cat == NULL)
        return (NULL);
    cat[len] = '\0';
    n = -1;
    x = 0;
    if (s1)
        while (s1[++n])
            cat[n] = s1[n];
    while (s2[x])
        cat[n++] = s2[x++];
    return (cat);
}