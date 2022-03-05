/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 18:43:36 by danierod          #+#    #+#             */
/*   Updated: 2022/03/03 18:24:37 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(const char *s1, char (*f)(unsigned int, char))
{
	char			*s2;
	unsigned int	i;

	if (!s1 || !f)
		return (NULL);
	s2 = (char *)malloc((ft_strlen(s1) + 1) * sizeof(char));
	if (!s2)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		s2[i] = f(i, s1[i]);
		++i;
	}
	s2[i] = '\0';
	return (s2);
}
