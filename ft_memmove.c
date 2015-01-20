/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmole <mmole@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/19 17:12:46 by mmole             #+#    #+#             */
/*   Updated: 2015/01/19 17:12:47 by mmole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "unistd.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	unsigned char	*tmpSrc;
	unsigned char	*tmpDst;

	tmpSrc = (unsigned char *)src;
	tmpDst = (unsigned char *)dst;
	i = 0;
	while (i < len)
	{
		*tmpSrc = *tmpSrc;
		tmpSrc++;
		tmpDst++;
		i++;
	}
	return (dst);
}