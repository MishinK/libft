/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 10:56:01 by ashea             #+#    #+#             */
/*   Updated: 2020/05/21 14:06:24 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int					ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*s1_copy;
	unsigned char	*s2_copy;
	size_t			i;

	s1_copy = (unsigned char *)s1;
	s2_copy = (unsigned char *)s2;
	i = 0;
	while (s1_copy[i] == s2_copy[i] && s1_copy[i] && i < n)
		i++;
	if (s1_copy[i] != s2_copy[i] && i < n)
		return (s1_copy[i] - s2_copy[i]);
	return (0);
}
