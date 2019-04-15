/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wvenita <wvenita@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/14 23:08:14 by wvenita           #+#    #+#             */
/*   Updated: 2019/04/15 21:42:14 by wvenita          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*list;
	t_list	*temp;

	if (!lst || !f)
		return (NULL);
	temp = ft_lstnew(lst->content, lst->content_size);
	list = f(temp);
	new = list;
	while (lst->next)
	{
		lst = lst->next;
		temp = ft_lstnew(lst->content, lst->content_size);
		if (!(list->next = f(temp)))
		{
			free(list->next);
			return (NULL);
		}
		list = list->next;
	}
	return (new);
}
