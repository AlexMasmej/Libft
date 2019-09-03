/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_get_number_len.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasmeje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 20:02:38 by amasmeje          #+#    #+#             */
/*   Updated: 2019/09/02 20:02:48 by amasmeje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_get_number_len(int isneg, long n)
{
	int		len;

	len = 0;
	if (isneg == 1)
		len = 1;
	while (n >= 10)
	{
		n = n / 10;
		len++;
	}
	len++;
	return (len);
}
