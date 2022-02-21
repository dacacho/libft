/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/15 10:54:16 by danierod          #+#    #+#             */
/*   Updated: 2022/02/15 17:00:23 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
