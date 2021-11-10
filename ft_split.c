/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ashea <ashea@student.21-school.ru>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/14 18:57:34 by ashea             #+#    #+#             */
/*   Updated: 2020/05/20 17:33:37 by ashea            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_word_count(char const *s, char c)
{
	int		i;
	int		count;

	i = 0;
	count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			count++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else
			while (s[i] == c && s[i] != '\0')
				i++;
	}
	return (count);
}

static int	ft_word_length(char const *s, char c)
{
	int		len;

	len = 0;
	while (s[len] != '\0' && s[len] != c)
		len++;
	return (len);
}

static char	**ft_clean_word(char **word, int len)
{
	while (len > 0)
	{
		len--;
		free(word[len]);
	}
	free(word);
	return (NULL);
}

char		**ft_split(char const *s, char c)
{
	int		i;
	int		k;
	int		len;
	int		count;
	char	**word;

	if (!s)
		return (NULL);
	count = ft_word_count(s, c);
	if (!(word = (char **)malloc(sizeof(char*) * (count + 1))))
		return (NULL);
	i = 0;
	k = 0;
	while (i < count)
	{
		while (s[k] == c)
			k++;
		len = ft_word_length(&s[k], c);
		if (!(word[i] = ft_substr(s, k, len)))
			return (ft_clean_word(word, i));
		k += len;
		i++;
	}
	word[i] = NULL;
	return (word);
}
