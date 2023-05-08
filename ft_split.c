/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/08 20:59:15 by gykoh             #+#    #+#             */
/*   Updated: 2023/05/08 22:45:17 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"

// static size_t	ft_count(char const *s, char c)
// {
// 	size_t	i;
// 	size_t	cnt;

// 	i = 0;
// 	cnt = 0;
// 	if (s == 0)
// 		return (0);
// 	while (s[i] && s[i] == c)
// 		i++;
// 	while (s[i])
// 	{
// 		cnt++;
// 		while (s[i] && s[i] != c)
// 			i++;
// 		while (s[i] && s[i] == c)
// 			i++;
// 	}
// 	return (cnt);
// }

// static size_t	ft_wordlen(char const *s, char c)
// {
// 	size_t	i;
// 	size_t	len;

// 	i = 0;
// 	len = 0;
// 	while (s[i] && s[i] != c)
// 	{
// 		i++;
// 		len++;
// 	}
// 	return (len);
// }

// static char	*ft_strndup(const char *s, size_t n)
// {
// 	size_t	i;
// 	char	*answer;

// 	answer = (char *)malloc(sizeof(char) * (n + 1));
// 	if (!answer)
// 		return (0);
// 	i = 0;
// 	while (i < n)
// 	{
// 		answer[i] = s[i];
// 		i++;
// 	}
// 	answer[i] = '\0';
// 	return (answer);
// }

// static char	**ft_free(char **s)
// {
// 	unsigned int	i;

// 	i = 0;
// 	while (s[i] != NULL)
// 	{
// 		free(s[i]);
// 		i++;
// 	}
// 	free(s);
// 	return (NULL);
// }

// char	**ft_split(char const *s, char c)
// {
// 	size_t	i;
// 	size_t	len;
// 	size_t	cnt;
// 	char	**answer;

// 	cnt = ft_count(s, c);
// 	answer = (char **)malloc(sizeof(char *) * (cnt + 1));
// 	if (!answer || s == 0)
// 		return (0);
// 	i = 0;
// 	while (i < cnt)
// 	{
// 		while (*s && *s == c)
// 			s++;
// 		len = ft_wordlen(s, c);
// 		answer[i] = ft_strndup(s, len);
// 		if (answer[i] == NULL)
// 		{
// 			ft_free(answer);
// 			return (0);
// 		}
// 		s += len;
// 		i++;
// 	}
// 	answer[cnt] = 0;
// 	return (answer);
// }
#include "libft.h"

static int	count_word(char const *s, char c);
static int	create_string(int word_count, char const *s, char c, char **rtn);
static int	word_len(char const *s, char c);

char	**ft_split(char const *s, char c)
{
	char	**rtn;
	int		wc;

	wc = count_word(s, c);
	rtn = (char **)malloc(sizeof(char *) * (wc + 1));
	if (!rtn)
		return (0);
	if (!create_string(wc, s, c, rtn))
	{
		free(rtn);
		return (0);
	}
	return (rtn);
}

static int	count_word(char const *s, char c)
{
	int	r;
	int	f;

	r = 0;
	while (*s)
	{
		f = 0;
		while (*s && *s != c)
		{
			f = 1;
			s++;
		}
		if (f == 1)
			r++;
		while (*s && *s == c)
			s++;
	}
	return (r);
}

static int	create_string(int word_count, char const *s, char c, char **rtn)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i < word_count)
	{
		while (*s == c)
			s++;
		rtn[i] = (char *)malloc(sizeof(char) * (word_len(s, c) + 1));
		if (!rtn[i])
		{
			while (i)
				free(rtn[--i]);
			return (0);
		}
		j = 0;
		while (*s != c && *s)
			rtn[i][j++] = *(s++);
		rtn[i][j] = 0;
		i++;
	}
	rtn[i] = 0;
	return (1);
}

static int	word_len(char const *s, char c)
{
	int	i;

	i = 0;
	while (s[i] && s[i] != c)
		i++;
	return (i);
}
