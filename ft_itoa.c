/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 23:59:37 by ashea             #+#    #+#             */
/*   Updated: 2020/05/21 15:38:57 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_power(int n)
{
	int		power;

	power = 0;
	if (n <= 0)
		power = 1;
	while (n != 0)
	{
		n = n / 10;
		power++;
	}
	return (power);
}

char		*ft_itoa(int n)
{
	int		power;
	int		sign;
	char	*str;

	power = ft_power(n);
	if (!(str = (char *)malloc(sizeof(char) * power + 1)))
		return (NULL);
	str[power] = '\0';
	if (n < 0)
		sign = -1;
	else
		sign = 1;
	while (power >= 0)
	{
		power--;
		str[power] = n % 10 * sign + '0';
		n = n / 10;
	}
	if (sign == -1)
		str[0] = '-';
	return (str);
}
