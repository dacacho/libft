/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:54:15 by danierod          #+#    #+#             */
/*   Updated: 2022/02/17 17:39:47 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (!src || !dst)
		return (0);
	while (dst[i] != '\0' && i < dstsize)
		i++;
	while (src[i - i] && i + 1 < dstsize)
		*dst++ = *src++;
	if (i < dstsize)
		*dst = '\0';
	return (ft_strlen(src) + i);
}
