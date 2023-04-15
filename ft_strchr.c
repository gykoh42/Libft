/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/15 15:58:42 by gykoh             #+#    #+#             */
/*   Updated: 2023/04/15 20:24:00 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strchr(const char *s, int c)
{
    char    *first;
    char    find;
    size_t  i;

    first = (char *)s;
    find = (char)c;
    i = 0;
    while (s[i] != '\0')
    {
        if (first[i] == find)
            return (first);
    }
    return (0);
}