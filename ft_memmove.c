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
	char	*dst1;
	char	*src1;
	size_t	i;

	i = 0;
	dst1 = (char *)dst;
	src1 = (char *)src;
	ft_strncpy(dst1, src1, len);
	while (dst1[i])
		i++;
	while (i < len)
	{
		dst1[i] = src1[i];
		i++;
	}
	return (dst);
}
