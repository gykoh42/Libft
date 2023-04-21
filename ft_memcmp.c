/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/20 15:45:22 by gykoh             #+#    #+#             */
/*   Updated: 2023/04/21 17:19:05 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_memcmp(const void *s1, const void *s2, size_t n)
{
    size_t i;
    unsigned char *tmp_s1 = (unsigned char *)s1;
    unsigned char *tmp_s2 = (unsigned char *)s2;

    i = 0;
    while (i < n)
    {
        if (tmp_s1[i] != tmp_s2[i])
            return (tmp_s1[i] - tmp_s2[i]);
        i++;
    }
    return (0);
}