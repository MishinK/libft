/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/08 23:06:47 by ashea             #+#    #+#             */
/*   Updated: 2020/05/21 14:10:58 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t		ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	dstlen;
	size_t	srclen;
	size_t	i;

	srclen = 0;
	while (src[srclen] != '\0')
		srclen++;
	dstlen = 0;
	while (dst[dstlen] != '\0')
		dstlen++;
	if (dstsize <= dstlen)
		return (srclen + dstsize);
	i = 0;
	while (i < srclen && i < (dstsize - dstlen - 1))
	{
		dst[dstlen + i] = src[i];
		i++;
	}
	dst[dstlen + i] = '\0';
	return (srclen + dstlen);
}
