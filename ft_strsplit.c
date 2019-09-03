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

char	**ft_strsplit(char const *s, char c)
{
	int		i;
	int		j;
	int		k;
	char	**array;

	if (!s)
		return (NULL);
	i = -1;
	j = 0;
	if (!(array = (char **)malloc(sizeof(char *) * (ft_count_words(s, c) + 1))))
		return (NULL);
	while (++i < ft_count_words(s, c))
	{
		k = 0;
		if (!(array[i] = (char *)malloc(ft_get_word_len(&s[j], c) + 1)))
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
