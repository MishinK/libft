/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 16:33:47 by ashea             #+#    #+#             */
/*   Updated: 2020/05/21 13:58:54 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*dst_copy;
	unsigned char	*src_copy;
	size_t			i;

	if (dst == src || n == 0)
		return (dst);
	dst_copy = (unsigned char *)dst;
	src_copy = (unsigned char *)src;
	i = 0;
	while (i < n)
	{
		dst_copy[i] = src_copy[i];
		i++;
	}
	return (dst);
}
