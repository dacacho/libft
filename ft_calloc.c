/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/22 15:29:57 by danierod          #+#    #+#             */
/*   Updated: 2022/03/12 15:14:51 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t n, size_t s)
{
	void	*str;

	str = malloc(n * s);
	if (!str)
		return (NULL);
	ft_bzero(str, n * s);
	return (str);
}
