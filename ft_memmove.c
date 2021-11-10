/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/10 18:32:38 by ashea             #+#    #+#             */
/*   Updated: 2020/05/21 14:01:58 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void				*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*dst_copy;
	unsigned char	*src_copy;

	if (dst == src || len == 0)
		return (dst);
	dst_copy = (unsigned char *)dst;
	src_copy = (unsigned char *)src;
	if (dst_copy < src_copy)
		while (len--)
			*dst_copy++ = *src_copy++;
	else
	{
		dst_copy += len;
		src_copy += len;
		while (len--)
			*--dst_copy = *--src_copy;
	}
	return (dst);
}
