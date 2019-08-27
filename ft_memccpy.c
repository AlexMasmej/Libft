/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasmeje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 21:36:44 by amasmeje          #+#    #+#             */
/*   Updated: 2019/08/12 21:36:47 by amasmeje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, void *src, int c, size_t n)
{
	size_t	i;
	char	*dst1;
	char	*src1;

	i = 0;
	dst1 = (char *)dst;
	src1 = (char *)src;
	while (i < n)
	{
		if (src1[i] == c)
		{
			dst1[i] = src1[i];
			dst++;
			return (dst);
		}
		dst1[i] = src1[i];
		dst++;
		i++;
	}
	return (NULL);
}
