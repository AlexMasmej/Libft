/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasmeje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 14:55:43 by amasmeje          #+#    #+#             */
/*   Updated: 2019/09/02 14:55:51 by amasmeje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list	*tmp;

	tmp = (*alst);
	while (tmp != NULL)
	{
		(*alst) = tmp->next;
		del(tmp->content, tmp->content_size);
		free(tmp);
		tmp = (*alst);
	}
	*alst = NULL;
}
