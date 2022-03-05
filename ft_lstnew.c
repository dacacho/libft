/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/05 10:53:58 by danierod          #+#    #+#             */
/*   Updated: 2022/03/05 12:08:53 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list *head;

	head = (t_list*)malloc(sizeof(*head));
	if (!head)
		return (NULL);
	head->content = content;
	head->next = NULL;
	return (head);
}
