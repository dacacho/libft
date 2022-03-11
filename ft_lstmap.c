/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 22:12:51 by danierod          #+#    #+#             */
/*   Updated: 2022/03/10 07:40:08 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*dummy1;
	t_list	*dummy2;

	if (!lst)
		return (0);
	dummy1 = NULL;
	while (lst)
	{
		dummy2 = ft_lstnew(f(lst -> content));
		if (!dummy2)
		{
			ft_lstclear(&dummy1, (void (*)(void *))del);
			return (0);
		}
		ft_lstadd_back(&dummy1, dummy2);
		lst = lst -> next;
	}
	return (dummy1);
}
