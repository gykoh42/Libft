/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 16:10:11 by gykoh             #+#    #+#             */
/*   Updated: 2023/04/17 16:40:45 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strrchr(const char *s, int c)
{
    size_t i;

    i = ft_strlen(s);
    while (i > 0 && s[i] != (char)c)
        i--;
    if (s[i] == (char)c)
        return ((char *)(s + i));
    return (0);
}