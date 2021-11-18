/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelarme <gdelarme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 17:31:30 by gdelarme          #+#    #+#             */
/*   Updated: 2021/11/18 18:24:44 by gdelarme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	i;
	size_t	j;
	size_t	size;

	i = 0;
	j = 0;
	while (s1[i])
		i++;
	size = i + 1;
	s2 = (char *)malloc(sizeof(*s1) * (size));
	if (!s2)
		return (0);
	while (j <= size)
	{
		s2[j] = s1[j];
		j++;
	}
	s2[j] = '\0';
	return (&s2[0]);
}
