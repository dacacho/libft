/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/17 18:11:11 by danierod          #+#    #+#             */
/*   Updated: 2022/03/10 07:54:04 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	char	*ptr;
	int		trigger;
	int		str_len;

	str_len = ft_strlen(str);
	trigger = 0;
	while (str_len >= 0)
	{
		if (*str == (char)c)
		{
			ptr = (char *)str;
			trigger = 1;
		}
		str++;
		str_len--;
	}
	if (trigger == 0)
		return (NULL);
	else
		return (ptr);
}
