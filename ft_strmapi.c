/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/15 01:43:54 by ashea             #+#    #+#             */
/*   Updated: 2020/05/21 15:37:47 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*f_str;
	size_t	i;

	if (!s)
		return (NULL);
	f_str = (char *)malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!f_str)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		f_str[i] = f(i, s[i]);
		i++;
	}
	f_str[i] = '\0';
	return (f_str);
}
