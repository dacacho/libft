/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: danierod <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/09 21:33:09 by danierod          #+#    #+#             */
/*   Updated: 2022/03/10 08:00:35 by danierod         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*dummy;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		dummy = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = dummy;
	}
}
