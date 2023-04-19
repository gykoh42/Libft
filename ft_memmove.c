/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 17:44:20 by gykoh             #+#    #+#             */
/*   Updated: 2023/04/18 17:21:46 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memmove(void *dst, const void *src, size_t len)
{
    char *d = dst;
    const char *s = src;
    size_t i;

    if (d < s)
    {
        i = 0;
        while (i < len)
        {
            d[i] = s[i];
            i++;
        }
    }
    else
    {
        i = len - 1;
        while(i >= 0)
        {
            d[i] = s[i];
            i--;
        }
    }
    return (d);
}