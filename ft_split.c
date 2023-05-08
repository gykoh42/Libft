/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 20:59:15 by gykoh             #+#    #+#             */
/*   Updated: 2023/05/08 22:08:11 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t ft_count(char const *s, char c)
{
    size_t  i; 
    size_t  cnt;

    i = 0;
    cnt = 0;
    if (s == 0)
        return (0);
    while (s[i] && s[i] == c)
        i++;
    while (s[i])
    {
        cnt++;
        while (s[i] && s[i] != c)
            i++;
        while (s[i] && s[i] == c)
            i++;
    }    
    return (cnt);
}

static size_t ft_wordlen(char const *s, char c)
{
    size_t  i;
    size_t  len;

    i = 0;
    len = 0;
    while (s[i] && s[i] != c)
    {
        i++;
        len++;
    }
    return (len);
}

static char *ft_strndup(const char *s, size_t n)
{
    size_t i;
    char *answer;

    if (!(answer = (char *)malloc(sizeof(char) * (n + 1))))
        return (0);
    i = 0;
    while (i < n)
    {
        answer[i] = s[i];
        i++;
    }
    answer[i] = '\0';
    return (answer);
}

static char **ft_free(char **s)
{
    unsigned int    i;

    i = 0;
    while (s[i] != NULL)
    {
        free(s[i]);
        i++;
    }
    free(s);
    return (NULL);
}

char    **ft_split(char const *s, char c)
{
    size_t  i; 
    size_t  len;
    size_t  cnt;
    char    **answer;

    cnt = ft_count(s, c);
    if (!(answer = (char **)malloc(sizeof(char *) * (cnt + 1))) || s == 0)
        return (0);
    i = 0;
    while (i < cnt)
    {
        while (*s && *s == c)
            s++;
        len = ft_wordlen(s, c);
        if (!(answer[i] = ft_strndup(s, len)))
        {
            ft_free(answer);
            return (0);
        }
        s += len;
        i++;
    }
    answer[cnt] = 0;
    return (answer);
}