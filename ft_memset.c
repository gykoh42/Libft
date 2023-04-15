/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/14 22:44:19 by gykoh             #+#    #+#             */
/*   Updated: 2023/04/15 02:01:09 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_memset(void *b, int c, size_t len)
{
    size_t i;

    i = 0;
    unsigned char *ptr = (unsigned char *)b;
    while (i < len)
    {
        ptr[i] = (unsigned char)c;
        i++;
    }
    return (b);
}

// #include <stdio.h>
// #include <string.h>
// #include <ctype.h>
// int main(){

//     int arr[10];
//     ft_memset(arr, 'A', sizeof(arr));
//     for (int i = 0; i < 10; i++)
//         printf("%d\n", arr[i]);
//     return (0);
// }