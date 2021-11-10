/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 23:42:53 by ashea             #+#    #+#             */
/*   Updated: 2020/05/19 13:39:54 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*element;

	if (!lst || !new)
		return ;
	if (*lst)
	{
		element = *lst;
		while (element->next)
			element = element->next;
		element->next = new;
	}
	else
		*lst = new;
}
