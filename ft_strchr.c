/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:48:14 by danierod          #+#    #+#             */
/*   Updated: 2022/03/10 06:53:49 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	nc;

	nc = (char)c;
	while (*s != '\0')
	{
		if (*s == nc)
			return ((char *)s);
		s++;
	}
	if (*s == nc)
		return ((char *)s);
	return (NULL);
}
