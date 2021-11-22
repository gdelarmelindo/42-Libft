/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelarme <gdelarme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 18:10:00 by gdelarme          #+#    #+#             */
/*   Updated: 2021/11/19 19:43:13 by gdelarme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	size_t	len_s1;
	size_t	len_s2;
	size_t	i;

	if (!s1 || !s2)
		return (0);
	len_s1 = ft_strlen(s1);
	len_s2 = ft_strlen(s2);
	s3 = (char *)malloc(sizeof(*s3) * (len_s1 + len_s2 + 1));
	if (s3 == NULL)
		return (0);
	i = 0;
	while (i < len_s1)
	{
		s3[i] = s1[i];
		i++;
	}
	while (i < (len_s1 + len_s2))
	{
		s3[i] = s2[i - len_s1];
		i++;
	}
	s3[i] = '\0';
	return (s3);
}
