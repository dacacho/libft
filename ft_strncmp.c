/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 19:05:29 by danierod          #+#    #+#             */
/*   Updated: 2022/03/10 04:06:01 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*bot1;
	unsigned char	*bot2;

	bot1 = (unsigned char *)s1;
	bot2 = (unsigned char *)s2;
	i = 0;
	while ((bot1[i] || bot2[i]) && i < n)
	{
		if (bot1[i] != bot2[i])
			return (bot1[i] - bot2[i]);
		i++;
	}
	return (0);
}
