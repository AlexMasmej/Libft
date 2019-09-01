/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasmeje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 15:41:58 by amasmeje          #+#    #+#             */
/*   Updated: 2019/08/29 15:42:07 by amasmeje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		count_words(const char *s, int c)
{
	int		i;
	int		n;

	i = 0;
	n = 0;
	while (s[i])
	{
		if (s[i] == c)
		{
			i++;
			continue;
		}
		while (s[i] != c && s[i])
			i++;
		n++;
	}
	return (n);
}

int		get_word_len(const char *s, char c)
{
	int		i;
	int		len;

	len = 0;
	i = 0;
	while (s[i] == c)
		i++;
	while (s[i] != c && s[i])
	{
		i++;
		len++;
	}
	return (len);
}

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**array;

	i = -1;
	j = 0;
	if (!(array = (char **)malloc(sizeof(char *) * (count_words(s, c) + 1))))
		return (NULL);
	while (++i < count_words(s, c))
	{
		k = 0;
		if (!(array[i] = (char *)malloc(get_word_len(&s[j], c) + 1)))
			return (NULL);
		while (s[j] == c)
			j++;
		while (s[j] != c && s[j])
			array[i][k++] = s[j++];
		array[i][k] = '\0';
	}
	array[i] = NULL;
	return (array);
}
