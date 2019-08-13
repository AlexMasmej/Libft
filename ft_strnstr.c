/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasmeje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 16:11:57 by amasmeje          #+#    #+#             */
/*   Updated: 2019/08/12 16:11:59 by amasmeje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;

	i = 1;
	j = 0;
	if (*needle)
	{
		while (haystack[i] && (i - 1) <= len)
			i++;
		while (needle[j] && j <= len)
			j++;
		while (*needle != *haystack && i-- > 0)
			haystack++;
		i = 0;
		while (*needle == *haystack && i != j)
		{
			needle++;
			haystack++;
			i++;
		}
		if (i >= j)
			return ((char *)haystack - i);
		return (NULL);
	}
	return ((char *)haystack);
}
