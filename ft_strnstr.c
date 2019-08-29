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
	int		i;
	int		j;
	int		len_check;

	i = 0;
	j = 0;
	len_check = -1;
	if (*needle)
	{
		while (needle[i])
			i++;
		while (*needle != *haystack && *haystack && len_check++ < (int)len)
			haystack++;
		while (*needle == *haystack && *needle && len_check < (int)len)
		{
			needle++;
			haystack++;
			j++;
			len_check++;
		}
		if (j == i)
			return ((char *)haystack - j);
		return (NULL);
	}
	return ((char *)haystack);
}
