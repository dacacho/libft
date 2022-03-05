/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:27:09 by danierod          #+#    #+#             */
/*   Updated: 2022/03/05 08:12:58 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*bot1;
	unsigned char	*bot2;

	bot1 = (unsigned char *)s1;
	bot2 = (unsigned char *)s2;
	if (!n)
		return (NULL);
	while (--n && *bot1++ == *bot2++)
		if (*bot1 != *bot2)
			return (*bot1 - *bot2);
	return (NULL);
}
