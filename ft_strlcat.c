/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasmeje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/07 21:24:07 by amasmeje          #+#    #+#             */
/*   Updated: 2019/08/10 11:34:04 by amasmeje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	char	*s;

	i = ft_strlen(dst);
	j = i;
	s = (char *)src;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (*s && i < (dstsize - 1))
	{
		dst[i] = *s;
		s++;
		i++;
	}
	if (j > dstsize)
		return (ft_strlen(src) + dstsize);
	while (i < dstsize)
	{
		dst[i] = '\0';
		i++;
	}
	return (j + ft_strlen(src));
}
