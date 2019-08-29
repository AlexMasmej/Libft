/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memalloc.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasmeje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 22:16:39 by amasmeje          #+#    #+#             */
/*   Updated: 2019/08/28 22:16:41 by amasmeje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memalloc(size_t size)
{
	char	*target;
	size_t	i;

	i = 0;
	if (!(target = (void *)malloc(size)))
		return (NULL);
	while (i < size)
	{
		target[i] = 0;
		i++;
	}
	return ((void *)target);
}
