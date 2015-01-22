/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmole <mmole@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/19 17:12:46 by mmole             #+#    #+#             */
/*   Updated: 2015/01/19 17:12:47 by mmole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <string.h>

t_list	*ft_lstnew(void const *content, size_t content_size)
{
	t_list	*newElem;

	newElem = (t_list *)malloc(sizeof(t_list));
	if (!newElem)
		return (NULL);
	if (!content)
	{
		newElem->content = NULL;
		newElem->content_size = 0;
	}
	else
	{
		newElem->content = (void *)malloc(content_size);
		if (!newElem->content)
			return (NULL);
		newElem->content = ft_memcpy(newElem->content, content, content_size);
		newElem->content_size = (size_t)content_size;
	}
	newElem->next = NULL;

	return newElem;
}