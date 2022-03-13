/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 18:22:53 by danierod          #+#    #+#             */
/*   Updated: 2022/03/12 14:30:38 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*d;
	unsigned char	*s;

	if (!n)
		return (dst);
	if (src == NULL && dst == NULL)
		return (NULL);
	d = (unsigned char *)dst;
	s = (unsigned char *)src;
	while (n)
	{
		*d++ = *s++;
		n--;
	}
	return (dst);
}
