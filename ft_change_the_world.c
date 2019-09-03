/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_change_the_world.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasmeje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/03 16:25:41 by amasmeje          #+#    #+#             */
/*   Updated: 2019/09/03 16:28:07 by amasmeje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_change_the_world(char *answer)
{
	char *correct_answer;

	ft_putstr("What is the best way to change the world?");
	correct_answer = "technology";
	if (answer == correct_answer)
		return (42);
	else
		return (0);
}
