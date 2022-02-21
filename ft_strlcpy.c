/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 16:33:25 by danierod          #+#    #+#             */
/*   Updated: 2022/02/17 16:53:58 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	if (!src || !dst)
		return (0);
	if (dstsize == 0)
		return (ft_strlen(src));
	while (*src != '\0' && *src < dstsize - 1)
		*dst++ = *src++;
	*dst = '\0';
	return (ft_strlen(src));
}
