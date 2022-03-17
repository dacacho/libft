/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pfile1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 15:09:23 by danierod          #+#    #+#             */
/*   Updated: 2022/03/17 15:28:19 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(char c)
{
	return (write(1, &c, 1));
}

int	ft_putstr(char *s)
{
	int	len;

	len = 0;
	if (!s)
		s = "(null)";
	while (*s != '\0')
	{
		ft_putchar(*s);
		s++;
		len++;
	}
	return (len);
}

int	numlen(int n)
{
	int	c;

	c = 0;
	if (n == 0)
	{
		c = 1;
		return (c);
	}
	if (n < 0)
		c++;
	while (n)
	{
		c++;
		n = n / 10;
	}
	return (c);
}

char	*ft_itoa(int n)
{
	char	*dummy;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = numlen(n);
	dummy = (char *)malloc(sizeof(char) * (len + 1));
	if (dummy == 0)
		return (0);
	if (n == 0)
		dummy[0] = '0';
	dummy[len] = '\0';
	if (n < 0)
	{
		dummy[0] = '-';
		n = -n;
	}
	while (n != 0 && len >= 0)
	{
		dummy[len-- - 1] = n % 10 + '0';
		n /= 10;
	}
	return (dummy);
}

char	*ft_strdup(const char *s1)
{
	char	*new;
	int		i;
	int		size;

	size = 0;
	while (s1[size])
		++size;
	new = malloc(sizeof(char) * (size + 1));
	if (new == NULL)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		new[i] = s1[i];
		i++;
	}
	new[i] = '\0';
	return (new);
}
