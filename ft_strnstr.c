/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/21 16:58:53 by danierod          #+#    #+#             */
/*   Updated: 2022/02/21 22:22:22 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	h;
	size_t	n;

	if (*needle == '\0' || needle == NULL)
		return ((char *)haystack);
	h = 0;
	while (haystack[h] != '\0' && h < len)
	{
		n = 0;
		while (needle[n] == haystack[n + h] && h + n < len)
		{
			if (needle[n + 1] == '\0')
				return ((char *)&haystack[h]);
			n++;
		}
		h++;
	}
	return (NULL);
}

int	main()
{
	char	haystack[] = "hello world how we doing today?";
	char	needle[] = "doing";

	printf("%s", ft_strnstr(haystack, needle, 50));
	return (0);
}
