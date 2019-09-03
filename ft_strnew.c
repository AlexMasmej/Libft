/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasmeje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/28 22:59:28 by amasmeje          #+#    #+#             */
/*   Updated: 2019/08/28 22:59:35 by amasmeje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnew(size_t size)
{
	char	*target;
	size_t	i;

	i = 0;
	if (!(target = (char *)malloc(size + 1)))
		return (NULL);
	while (i < size + 1)
	{
		target[i] = 0;
		i++;
	}
	target[size] = '\0';
	return (target);
}
