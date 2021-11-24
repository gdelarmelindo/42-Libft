/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelarme <gdelarme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/23 20:07:29 by gdelarme          #+#    #+#             */
/*   Updated: 2021/11/24 19:55:28 by gdelarme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	get_size(char const *s, char c)
{
	int	size;
	int	flag;

	flag = 0;
	size = 0;
	while (*s != '\0')
	{
		if (*s != c && !flag)
		{
			size++;
			flag = 1;
		}
		else if (*s == c)
			flag = 0;
		s++;
	}
	return (size + 1);
}

char	*getsplit(char const *s, char c, int start)
{
	int	end;

	end = start;
	while (s[end] != c && s[end] != '\0')
		end++;
	return (ft_substr(s, start, (end - start)));
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	int		i;
	int		k;

	i = 0;
	k = 0;
	if (!s)
		return (0);
	split = malloc(sizeof(char *) * get_size(s, c));
	if (!split)
		return (0);
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			split[k] = getsplit(s, c, i);
			i = i + ft_strlen(split[k]) - 1;
			k++;
		}
		i++;
	}
	split[k] = 0;
	return (split);
}
