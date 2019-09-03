/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasmeje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/29 13:03:04 by amasmeje          #+#    #+#             */
/*   Updated: 2019/08/29 13:03:15 by amasmeje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char	*s1;
	size_t	i;

	if (!s)
		return (NULL);
	i = 0;
	if (!(s1 = (char *)malloc(len + 1)))
		return (NULL);
	while (i < len)
	{
		s1[i] = s[start];
		start++;
		i++;
	}
	s1[i] = '\0';
	return (s1);
}
