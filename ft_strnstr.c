/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:58:53 by danierod          #+#    #+#             */
/*   Updated: 2022/02/21 17:14:28 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*h;
	char	*n;

	h = (char *)haystack;
	n = (char *)needle;
	if (n == 0)
		return (&*h);
	while (--len)
	{
		if (h == n)
			return (&*h);
		h++;
		n++;
	}
	return (NULL);
}

int	main()
{
	char	haystack[] = "hello world how we doing today?";
	char	needle[] = "how";

	printf("%s", ft_strnstr(haystack, needle, 50));
	return (0);
}
