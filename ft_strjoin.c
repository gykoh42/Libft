/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 15:59:25 by gykoh             #+#    #+#             */
/*   Updated: 2023/05/05 12:33:23 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*answer;
	size_t	total_size;
	size_t	i;

	total_size = ft_strlen(s1) + ft_strlen(s2);
	if (s1 == 0 || s2 == 0)
		return (0);
	answer = (char *)malloc(sizeof(char) * (total_size + 1));
	if (answer == 0)
		return (0);
	ft_strlcpy(answer, s1, total_size + 1);
	i = ft_strlen(s1);
	while (*s2)
	{
		answer[i] = *s2;
		i++;
		s2++;
	}
	answer[i] = '\0';
	return (answer);
}
