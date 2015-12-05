/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 18:05:55 by vlistrat          #+#    #+#             */
/*   Updated: 2015/12/05 14:34:53 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*new;
	t_list		**new_list;
	int			i;
	t_list		*prev;

	new = NULL;
	new_list = &new;
	i = 0;
	prev = lst;
	while (lst)
	{
		lst = lst->next;
		prev->next = lst;
		i++;
	}
	new = ft_lstnew(f(lst)->content, f(lst)->content_size);
	lst = prev->next;
	while (lst)
	{
		new = ft_lstnew(f(lst)->content, f(lst)->content_size);
		ft_lstadd(new_list, new);
		lst = prev->next;
		i--;
	}
	return (*new_list);
}
