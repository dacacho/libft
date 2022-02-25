/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 15:40:02 by danierod          #+#    #+#             */
/*   Updated: 2022/02/24 16:09:00 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	size_t	i;
	size_t	j;
	char	*join;

	if (!s1 || !s2)
		return (NULL);
	join = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!join)
		return (NULL);
	i = 0;
	j = 0;
	while (s1[i] != '\0')
		join[j++] = s1[i++];
	i = 0;
	while (s2[i] != '\0')
		join[j++] = s2[i++];
	join[j] = '\0';
	return (join);
}
