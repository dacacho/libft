/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 17:48:14 by danierod          #+#    #+#             */
/*   Updated: 2022/02/24 18:59:51 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*dummy;

	dummy = (char *)s;
	while (*dummy != c)
	{
		if (*dummy == '\0')
			return (NULL);
		dummy++;
	}
	return (dummy);
}
