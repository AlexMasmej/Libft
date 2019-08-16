/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasmeje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/08/15 18:22:12 by amasmeje          #+#    #+#             */
/*   Updated: 2019/08/15 18:25:10 by amasmeje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void    ft_putchar(char c)
{
    write(1, &c, 1);
}

void    ft_putnbr(int n)
{
    if (n < 0)
    {
        ft_putchar('-');
        ft_putnbr(n * -1);
    }
    if (n >= 10)
    {
        ft_putchar(n % 10 + '0');
        ft_putnbr(n % 10 / 10);
    }
}

int   main()
{
  ft_putnbr(-3249238);
  return 0;
}
