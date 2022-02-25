/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 19:25:21 by danierod          #+#    #+#             */
/*   Updated: 2022/02/25 17:30:29 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	word_count(const char *s, const char c)
{
	size_t	i;

	i = 0;
	while (*s++)
	{
		if (*s == c)
			i++;
	}
	return (i + 1);
}

static char	*ft_wrdup(const char *s, int start, int finish)
{
	char	*word;
	int		i;

	i = 0;
	if (!s)
		return (NULL);
	word = malloc((finish - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < finish)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

char	**ft_split(const char *s, const char c)
{
	char	**phrase;
	int		index;
	size_t	p;
	size_t	i;

	if (!s)
		return (NULL);
	phrase = malloc(word_count(s, c) * sizeof(char *));
	if (!phrase)
		return (NULL);
	index = -1;
	i = 0;
	p = 0;
	while (i++ <= ft_strlen(s))
	{
		if (s[i] != c && index < 0)
			index = i;
		else if ((s[i] == c || i == ft_strlen(s)) && index >= 0)
		{
			phrase[p++] = ft_wrdup(s, index, i);
			index = -1;
		}
	}
	phrase[i] = 0;
	return (phrase);
}
