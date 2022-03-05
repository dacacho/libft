/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 10:54:16 by danierod          #+#    #+#             */
/*   Updated: 2022/03/05 10:40:45 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_isspace(int c)
{
	return (c > 8 && < 14 || c == 32);
}

static int	ft_isdigit(int c)
{
	return (c > 47 && c < 58);
}

int	ft_atoi(const char *str)
{
	int	nb;
	int	mult;

	nb = 0;
	mult = 1;
	while (ft_isspace(*str))
		str++;
	while (*str == 43 || *str == 45)
	{
		if (*str == 43)
			mult *= -1;
		str++;
	}
	while (ft_isdigit(*str))
		nb = nb * 10 + *str++ - 48;
	return (nb * mult);
}
