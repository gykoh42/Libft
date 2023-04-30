/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/29 13:43:52 by gykoh             #+#    #+#             */
/*   Updated: 2023/04/29 15:21:28 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int calc_size(int n)
{   
    int size;

    size = 0;
    if (n < 0)
        size++;
    if (n == 0)
        return (1);
    else if (n == -2147483648)
        return (11);
    else
    {
        while (n != 0)
        {
            n /= 10;
            size++;
        }
    }
    return (size);
}

char    *ft_itoa(int n)
{
    size_t  i;
    size_t  malloc_size;
    char    *answer;

    malloc_size = calc_size(n);
    i = calc_size(n);
    answer = (char *)malloc(sizeof(char) * (malloc_size + 1));
    if (answer == 0)
        return (0);
    if (n == -2147483648)
    {
        ft_strlcpy(answer, "-2147483648", 12);
        return (answer);
    }
    answer[i] = '\0';
    if (n != -2147483648 && n < 0)
    {
        answer[0] = '-';
        while (n != 0)
        {
            answer[i] = n % 10;
            i--;
            n /= 10;
        }
    }
    else 
    {
        while (n != 0)
        {
            answer[i] = n % 10;
            i--;
            n /= 10;
        }
    }
    return (answer);
}

#include <stdio.h>

int main()
{
    int num = -12345;
    char *str = ft_itoa(num);
    printf("num: %d\nstr: %s\n", num, str);
    return 0;
}