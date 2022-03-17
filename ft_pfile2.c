/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pfile2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/17 15:14:45 by danierod          #+#    #+#             */
/*   Updated: 2022/03/17 15:31:00 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int i)
{
	char	*num;
	int		len;

	len = 0;
	num = ft_itoa(i);
	len = ft_putstr(num);
	free (num);
	return (len);
}

int	ft_pp(unsigned long n, char *s)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	if (n / len != 0)
	{
		ft_pp((n / len), s);
		g_c += ft_putchar(s[n % len]);
	}
	else
		g_c += ft_putchar(s[n % len]);
	return (g_c);
}

int	ft_uh(unsigned int n, char *s)
{
	int	len;

	len = 0;
	while (s[len])
		len++;
	if (n / len != 0)
	{
		ft_uh((n / len), s);
		g_c += ft_putchar(s[n % len]);
	}
	else
		g_c += ft_putchar(s[n % len]);
	return (g_c);
}

int	format(char c, va_list var)
{
	g_c = 0;
	if (c == '%')
		g_c = ft_putchar('%');
	if (c == 'c')
		g_c = ft_putchar(va_arg(var, int));
	if (c == 's')
		g_c = ft_putstr(va_arg(var, char *));
	if (c == 'p')
	{
		g_c = write(1, "0x", 2);
		g_c = ft_pp(va_arg(var, unsigned long), "0123456789abcdef");
	}
	if (c == 'd' || c == 'i')
		g_c = ft_putnbr(va_arg(var, int));
	if (c == 'u')
		g_c = ft_uh(va_arg(var, unsigned int), "0123456789");
	if (c == 'x')
		g_c = ft_uh(va_arg(var, unsigned int), "0123456789abcdef");
	if (c == 'X')
		g_c = ft_uh(va_arg(var, unsigned int), "0123456789ABCDEF");
	return (g_c);
}

int	ft_printf(const char *s, ...)
{
	va_list	var;
	char	*dummy;
	int		count;

	count = 0;
	va_start(var, s);
	dummy = (char *)s;
	while (dummy[0] != '\0')
	{
		if (dummy[0] == '%')
		{
			count += format(dummy[1], var);
			dummy++;
		}
		else
			count += ft_putchar(*dummy);
		dummy++;
	}
	va_end(var);
	return (count);
}
