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
		while (haystack[i])
		{
			j = 0;
			while (haystack[i + j] == needle[j])
			{
				j++;
				if (needle[j] == '\0')
					return ((char *)haystack + i);
			}
		i++;
		}
		return (NULL);
	}
	return ((char *)haystack);
}
