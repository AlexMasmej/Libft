/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasmeje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/11 21:05:35 by amasmeje          #+#    #+#             */
/*   Updated: 2019/08/11 21:05:37 by amasmeje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (*needle)
	{
		while (needle[i])
			i++;
		while (*needle != *haystack && *haystack)
			haystack++;
		while (*needle == *haystack && *needle)
		{
			needle++;
			haystack++;
			j++;
		}
		if (j == i)
			return ((char *)haystack - j);
		return (NULL);
	}
	return ((char *)haystack);
}
