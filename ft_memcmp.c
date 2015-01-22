/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmole <mmole@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/19 17:12:46 by mmole             #+#    #+#             */
/*   Updated: 2015/01/19 17:12:47 by mmole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	unsigned char	*tmpS1;
	unsigned char	*tmpS2;

	i = 0;
	tmpS1 = (unsigned char *)s1;
	tmpS2 = (unsigned char *)s2;
	while (i < n)
	{
		if (*tmpS1 != *tmpS2)
			return (*tmpS1 - *tmpS2);
		i++;
		tmpS1++;
		tmpS2++;
	}
	return (0);
}