/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 19:29:27 by danierod          #+#    #+#             */
/*   Updated: 2022/02/22 19:39:58 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *s1, size_t n)
{
	char	*s2;
	size_t	i;

	if (!s1 || !n)
		return (NULL);
	s2 = malloc(sizeof(char) * n + 1);
	if (s2 == NULL)
		return (NULL);
	i = 0;
	while (s1[i] != '\0' && i++ < n)
		s2[i] = s1[i];
	s2[i] = '\0';
	return (s2);
}
