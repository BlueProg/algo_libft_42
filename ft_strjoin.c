/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mmole <mmole@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/01/19 17:12:46 by mmole             #+#    #+#             */
/*   Updated: 2015/01/19 17:12:47 by mmole            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str;
	size_t	i;
	size_t	len_s1;

	i = 0;
	if (s1 && s2)
	{
		len_s1 = ft_strlen(s1);
		str = (char *)malloc(sizeof(char) * len_s1 + 1);
		if (!str)
			return (NULL);
		while (s1[i])
		{
			str[i] = s1[i];
			i++;
		}
		i = -1;
		while (s2[++i])
			str[i + len_s1] = s2[i];
		str[i + len_s1] = '\0';
		return (str);
	}
	return (NULL);
}
