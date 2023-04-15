/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 16:10:11 by gykoh             #+#    #+#             */
/*   Updated: 2023/04/15 20:23:04 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    char    *last;
    char    find;
    size_t  i;

    last = (char *)s;
    find = (char)c;
    i = ft_strlen(s) - 1;
    while (i >= 0)
    {
        if (last[i] == find)
            return (last + i);
        i--;
    }
    return (0);
}