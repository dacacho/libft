/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcdup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 19:28:36 by danierod          #+#    #+#             */
/*   Updated: 2022/02/22 19:42:34 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcdup(const char *s1, int c)
{
	char	*s2;
	size_t	i;

	if (!s || !c)
		return (NULL);
	i = 0;
	while (s1[i] != (char)c && s1[i] != '\0')
		i++;
	s2 = malloc(sizeof(char) * i + 1);
	s2[i] = '\0';
	while (i-- > 0)
		s2[i] = s1[i];
	return (s2);
}
