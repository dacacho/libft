/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 14:38:56 by danierod          #+#    #+#             */
/*   Updated: 2022/02/24 15:09:25 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(const char *s, unsigned int start, size_t len)
{
	char			*sub;
	size_t			i;
	size_t			sc;

	if (!s)
		return (NULL);
	sub = (char *)malloc((len + 1) * sizeof(char));
	if (!sub)
		return (NULL);
	sc = start;
	i = 0;
	while (sc >= start && i < len)
		sub[i++] = s[sc++];
	sub[i] = '\0';
	return (sub);
}
