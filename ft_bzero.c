/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 11:21:23 by ashea             #+#    #+#             */
/*   Updated: 2020/05/21 13:51:54 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				ft_bzero(void *s, size_t n)
{
	unsigned char	*s_copy;
	size_t			i;

	s_copy = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		s_copy[i] = 0;
		i++;
	}
}
