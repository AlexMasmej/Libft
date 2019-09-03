/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasmeje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 17:11:02 by amasmeje          #+#    #+#             */
/*   Updated: 2019/09/02 17:11:09 by amasmeje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list		*new;
	t_list		*p_new;

	p_new = f(lst);
	new = p_new;
	while (lst->next)
	{
		lst = lst->next;
		p_new->next = f(lst);
		p_new = p_new->next;
	}
	return (new);
}
