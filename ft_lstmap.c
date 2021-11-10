/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/16 00:50:38 by ashea             #+#    #+#             */
/*   Updated: 2020/05/21 15:32:53 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*lst_f;
	t_list	*new;

	if (!lst || !f)
		return (NULL);
	if (!(new = ft_lstnew(f(lst->content))))
		return (NULL);
	lst_f = new;
	while (lst->next)
	{
		lst = lst->next;
		if (!(new->next = ft_lstnew(f(lst->content))))
		{
			ft_lstclear(&lst_f, del);
			return (NULL);
		}
		new = new->next;
	}
	return (lst_f);
}
