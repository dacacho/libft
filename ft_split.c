/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/24 19:25:21 by danierod          #+#    #+#             */
/*   Updated: 2022/03/12 19:51:16 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_countword(char const *s, char c)
{
	size_t	count;
	size_t	trigger;

	count = 0;
	trigger = 0;
	while (*s)
	{
		if (*s != c && trigger == 0)
		{
			trigger = 1;
			count++;
		}
		else if (*s == c)
			trigger = 0;
		s++;
	}
	return (count);
}

static char	*putword(const char *phrase, int start, int finish)
{
	char	*word;
	size_t	i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < finish)
		word[i++] = phrase[start++];
	word[i] = '\0';
	return (word);
}

static char	**subsplit(char **lst, const char *s, char c)
{
	size_t	i;
	size_t	j;
	int		start;

	i = 0;
	j = 0;
	start = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && start < 0)
			start = i;
		else if ((s[i] == c || i == ft_strlen(s)) && start >= 0)
		{
			lst[j++] = putword(s, start, i);
			start = -1;
		}
		i++;
	}
	lst[j] = NULL;
	return (lst);
}

char	**ft_split(char const *s, char c)
{
	char	**lst;

	if (!s)
		return (NULL);
	lst = malloc((ft_countword(s, c) + 1) * sizeof(char *));
	if (!lst)
		return (NULL);
	return (subsplit(lst, s, c));
}
