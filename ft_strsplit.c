/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memdel.c                                        :+:      :+:    :+:   */
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

int		ft_height(char const *s, char c)
{
	int	len;
	int	i;

	i = 0;
	len = 1;
	while (s[i])
	{
		if (s[i] == c)
			len++;
		i++;
	}
	return (len);
}

char	*ft_extract_word(char const *s, int index, char c)
{
	int		i;
	int		j;
	char	*str;

	j = 0;
	i = index;
	while (s[i] && s[i] != c)
	{
		i++;
	}
	str = (char *)malloc(sizeof(char ) * i - index);
	while (j < i - index)
	{
		str[j] = s[index + j];
		j++;
	}
	str[j] = '\0';
	return (str);
}

char	*ft_give_word(char const *s, int index, char c)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c || index == 0)
		{
			while (s[i] && s[i] == c)
				i++;
			if (s[i])
			{
				if (index == 0)
				{
					return (ft_extract_word(s, i, c));
				}
				index--;
			}
		}
		i++;
	}
	return (NULL);
}

char 	**ft_strsplit(char const *s, char c)
{
	int	i;
	int	height;
	char **tab;

	i = 0;
	if (s && c)
	{
		height = ft_height(s, c);
		tab = (char **)malloc(sizeof(char *) * (height + 1));
		if (!tab)
		{
			return (NULL);
		}
		while (i < height)
		{
			tab[i] = ft_give_word(s, i, c);
			i++;
		}
		tab[i] = 0;
		return (tab);
	}
	return (NULL);
}