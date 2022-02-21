/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:48:14 by danierod          #+#    #+#             */
/*   Updated: 2022/02/21 17:08:15 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*dummy;

	dummy = (const char *)s;
	while (*dummy++)
	{
		if (*dummy == (const char)c)
			return (&*dummy);
	}
	return (NULL);
}
