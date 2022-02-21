/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 19:23:26 by danierod          #+#    #+#             */
/*   Updated: 2022/02/21 15:26:53 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*dummy;

	dummy = (unsigned char *)s;
	while (n--)
	{
		if (*dummy++ == (unsigned char)c)
			return (dummy - 1);
	}
	return (NULL);
}
