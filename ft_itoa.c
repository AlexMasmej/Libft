/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasmeje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/16 14:25:36 by amasmeje          #+#    #+#             */
/*   Updated: 2019/08/16 14:30:58 by amasmeje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int		isneg;
	int		len;
	int		len2;
	char	*dest;

	if (n == -2147483648)
		return ("-2147483648");
	isneg = n < 0 ? 1 : 0;
	if (n < 0)
		n = n * -1;
	len = ft_get_number_len(isneg, n);
	if (!(dest = malloc(len + 1)))
		return (NULL);
	len2 = len;
	while (n >= 10)
	{
		dest[len - 1] = n % 10 + '0';
		n = n / 10;
		len--;
	}
	if (isneg == 1)
		dest[0] = '-';
	dest[isneg] = n % 10 + '0';
	dest[len2] = '\0';
	return (dest);
}
