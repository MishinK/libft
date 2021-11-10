/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 11:05:00 by ashea             #+#    #+#             */
/*   Updated: 2020/05/21 13:51:27 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*b_copy;
	size_t			i;

	b_copy = (unsigned char *)b;
	i = 0;
	while (i < len)
	{
		b_copy[i] = (unsigned char)c;
		i++;
	}
	return (b);
}
