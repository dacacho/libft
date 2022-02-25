/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 15:27:09 by danierod          #+#    #+#             */
<<<<<<< HEAD
/*   Updated: 2022/02/22 19:24:53 by danierod         ###   ########.fr       */
=======
/*   Updated: 2022/02/21 18:37:32 by danierod         ###   ########.fr       */
>>>>>>> 57808c8c13d799c1b24b6a88edeaaa388fd4e597
/*   Updated: 2022/02/21 17:08:34 by danierod         ###   ########.fr       */
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
