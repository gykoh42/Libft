/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gykoh <gykoh@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/30 15:59:25 by gykoh             #+#    #+#             */
/*   Updated: 2023/05/19 17:10:58 by gykoh            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*answer;
	size_t	total_size;

	total_size = ft_strlen(s1) + ft_strlen(s2);
	if (s1 == 0 || s2 == 0)
		return (0);
	answer = (char *)malloc(sizeof(char) * (total_size + 1));
	if (answer == 0)
		return (0);
	ft_memcpy(answer, s1, ft_strlen(s1) + 1);
	ft_memcpy(answer + ft_strlen(s1), s2, ft_strlen(s2) + 1);
	return (answer);
}
