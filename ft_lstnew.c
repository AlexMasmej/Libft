/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amasmeje <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/02 13:07:24 by amasmeje          #+#    #+#             */
/*   Updated: 2019/09/02 13:07:52 by amasmeje         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list		*ft_lstnew(void const *content, size_t content_size)
{
	t_list		*link;

	link = (t_list *)malloc(sizeof(content_size));
	link->content = (void *)content;
	link->content_size = content_size;
	if (content == NULL)
	{
		link->content_size = 0;
		link->content = NULL;
	}
	link->next = NULL;
	return (link);
}
