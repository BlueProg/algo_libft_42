/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmole <mmole@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/19 17:12:46 by mmole             #+#    #+#             */
/*   Updated: 2015/01/19 17:12:47 by mmole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include "unistd.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	size_t	i;
	unsigned char *tmpDst;
	unsigned char *tmpSrc;

	i = 0;
	if (dst && src)
	{
		tmpDst = (unsigned char *)dst;
		tmpSrc = (unsigned char *)src;
		while (i < n)
		{
			if (*tmpSrc == c)
			{
				return ((void *)tmpDst);
			}
			*tmpDst = *tmpSrc;
			tmpDst++;
			tmpSrc++;
			i++;
		}
	}
	return (NULL);
}