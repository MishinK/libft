/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 19:15:24 by ashea             #+#    #+#             */
/*   Updated: 2020/05/21 14:02:26 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*s_copy;
	size_t			i;

	s_copy = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (s_copy[i] == (unsigned char)c)
			return ((void*)(s_copy + i));
		i++;
	}
	return (NULL);
}
