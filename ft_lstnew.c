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

	if (!(link = (t_list *)malloc(sizeof(t_list))))
		return (NULL);
	link->content = NULL;
	link->content_size = 0;
	if (content)
	{
		if (!(link->content = (void *)malloc(content_size)))
		{
			free(link);
			return (NULL);
		}
		ft_memcpy(link->content, (void *)content, content_size);
		link->content_size = content_size;
	}
	link->next = NULL;
	return (link);
}
