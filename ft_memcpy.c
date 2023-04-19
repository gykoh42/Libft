/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/17 16:48:03 by gykoh             #+#    #+#             */
/*   Updated: 2023/04/17 17:31:06 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memcpy(void *dst, const void *src, size_t n)
{
    size_t i;

    i = 0;
    if (n == 0 || dst == src)
        return (dst);
    if (dst == NULL && src == NULL)
        return (0);
    while (i < n)
    {
        ((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
        i++;
    }
    return (dst);
}