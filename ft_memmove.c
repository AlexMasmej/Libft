/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasmeje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/12 21:36:57 by amasmeje          #+#    #+#             */
/*   Updated: 2019/08/12 21:36:59 by amasmeje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*src1;
	char	*dst1;

	i = 0;
	src1 = (char *)src;
	dst1 = (char *)dst;
	if (dst1 < src1)
		return (ft_memcpy(dst, src, len));
	if (dst1 > src1)
	{
		while (len > 0)
		{
			dst1[len - 1] = src1[len - 1];
			len--;
		}
	}
	return (dst);
}
