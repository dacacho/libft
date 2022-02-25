/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 16:26:41 by danierod          #+#    #+#             */
/*   Updated: 2022/02/24 19:00:22 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_stt(const char *s1, const char *set)
{
	size_t	sc;

	sc = 0;
	while (s1[sc] == *set)
	{
		sc++;
	}
	return (sc);
}

static int	ft_end(const char *s1, const char *set)
{
	size_t	sc;

	sc = ft_strlen(s1) - 1;
	while (s1[sc] == *set)
	{
		sc--;
	}
	return (sc);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	char	*s2;
	size_t	i;
	size_t	len;
	size_t	start;

	start = ft_stt(s1, set);
	len = ft_end(s1, set) - ft_stt(s1, set);
	s2 = (char *)malloc(len + 1);
	if (!s2)
		return (NULL);
	i = 0;
	while (i <= len)
		s2[i++] = s1[start++];
	s2[i] = '\0';
	return (s2);
}
