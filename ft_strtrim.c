/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasmeje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 13:46:40 by amasmeje          #+#    #+#             */
/*   Updated: 2019/08/29 13:46:48 by amasmeje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	size_t		i;
	size_t		j;
	size_t		k;
	char		*s1;

	if (!s)
		return (NULL);
	if (ft_strlen(s) == 0)
		return ((char *)s);
	i = ft_trim_start(s);
	j = ft_trim_end(s);
	if (!(s1 = (char *)malloc(j - i + 2)))
		return (NULL);
	k = 0;
	while (i <= j)
	{
		s1[k] = s[i];
		k++;
		i++;
	}
	s1[k] = '\0';
	return (s1);
}
