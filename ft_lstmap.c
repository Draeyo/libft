/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 18:05:55 by vlistrat          #+#    #+#             */
/*   Updated: 2015/12/02 19:18:14 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*start;
	t_list		*next;
	t_list		*pouet;

	pouet = lst;
	if (lst)
	{
		pouet = ft_lstnew(f(lst)->content, f(lst)->content_size);
		start = pouet;
		next = pouet->next;
		lst = lst->next;
		ft_putstr("ab\n");
	}
	while (lst->next)
	{
		pouet = ft_lstnew(f(lst)->content, f(lst)->content_size);
		next = pouet->next;
		lst = lst->next;
		ft_putstr("cd\n");
	}
	pouet = ft_lstnew(f(lst)->content, f(lst)->content_size);
	return (start);
}
