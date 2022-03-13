/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 10:54:16 by danierod          #+#    #+#             */
/*   Updated: 2022/03/12 15:37:52 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(char c)
{
	return (c == '\f' || c == '\t' || c == ' '
		|| c == '\n' || c == '\r' || c == '\v');
}

int	ft_atoi(const char *str)
{
	int		sign;
	int		nb;
	int		i;

	nb = 0;
	sign = 1;
	i = 0;
	while (ft_isspace(str[i]))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i++] == '-')
			sign = -1;
	}
	while (str[i] && ft_isdigit(str[i]))
		nb = nb * 10 + (str[i++] - '0');
	return (nb * sign);
}
