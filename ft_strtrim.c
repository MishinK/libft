/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/12 16:32:39 by ashea             #+#    #+#             */
/*   Updated: 2020/05/20 17:34:13 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strtrim(char const *s1, char const *set)
{
	size_t	begin;
	size_t	end;

	if (!s1)
		return (NULL);
	begin = 0;
	end = ft_strlen(s1);
	while (s1[begin] != '\0' && ft_strchr(set, s1[begin]) != NULL)
		begin++;
	while (end > begin && ft_strchr(set, s1[end - 1]) != NULL)
		end--;
	return (ft_substr(s1, begin, end - begin));
}
