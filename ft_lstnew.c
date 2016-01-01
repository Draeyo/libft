/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vlistrat <vlistrat@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/12/01 17:08:34 by vlistrat          #+#    #+#             */
/*   Updated: 2015/12/05 16:39:58 by vlistrat         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*new;
	void	*content_copie = NULL;
	size_t	size_copie;

	size_copie = content_size;
	if (content == NULL)
	{
		content_copie = NULL;
		size_copie = 0;
	}
	else
	{
<<<<<<< HEAD
		ft_memcpy(content_copie, content, ft_strlen(content));
=======
		content_copie = (void*)content;
>>>>>>> a3d15aa8a81a1f6c3a7ab5b7d5f1a946b2b4a2e4
		size_copie = content_size;
	}
	new = (t_list*)malloc(sizeof(*new));
	if (new == NULL)
		return (NULL);
	new->content = content_copie;
	new->content_size = size_copie;
	new->next = NULL;
	return (new);
}
