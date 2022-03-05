/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 17:02:51 by danierod          #+#    #+#             */
/*   Updated: 2022/03/05 10:43:35 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_setstr(char *str, unsigned int fnum, long int len)
{
	while (fnum > 0)
	{
		str[len--] = (fnum % 10) + 48;
		fnum /= 10;
	}
	return (str);
}

static long int	ft_intlen(int n)
{
	long int	len;

	len = 0;
	if (n <= 0)
		len = 1;
	while (n != 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*str;
	long int		len;
	unsigned int	fnum;

	len = ft_intlen(n);
	str = (char *)malloc((len + 1) * sizeof(char));
	if (!str)
		return (NULL);
	str[len--] = '\0';
	if (n == 0)
		str[0] = 48;
	if (n < 0)
	{
		n *= -1;
		str[0] = '-';
	}
	fnum = n;
	str = ft_setstr(str, fnum, len);
	return (str);
}
