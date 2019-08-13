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

	i = 1;
	j = 0;
	if (*needle)
	{
		while (haystack[i - 1])
			i++;
		while (needle[j])
			j++;
		while (*needle != *haystack && i-- > 0)
			haystack++;
		i = -1;
		while (*needle == *haystack && i++ != j)
		{
			needle++;
			haystack++;
		}
		if (i >= j)
			return ((char *)haystack - i);
		return (NULL);
	}
	return ((char *)haystack);
}
