/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/09 09:51:05 by ashea             #+#    #+#             */
/*   Updated: 2020/05/21 14:04:03 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strrchr(const char *str, int c)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	while (i > 0 && str[i] != c)
		i--;
	if (str[i] == c)
		return ((char*)(str + i));
	return (NULL);
}
