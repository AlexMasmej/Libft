/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasmeje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/10 17:01:10 by amasmeje          #+#    #+#             */
/*   Updated: 2019/08/10 17:01:12 by amasmeje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	int	k;

	while (*s1 == *s2 && *s1 < n)
	{
		if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
	}
	k = *(unsigned char *)s1 - *(unsigned char *)s2;
	if (k < 0)
		return (-1);
	else if (k > 0)
		return (1);
	else
		return (0);
}

int	main()
{
	const char a[50] = "Who said I would";
	const char b[50] = "Who sajd I would";
	printf("%d\n should be\n%d", ft_strncmp(a, b, 50), strncmp(a, b, 50));
	return (0);
}
