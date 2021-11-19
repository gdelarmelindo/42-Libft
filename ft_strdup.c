/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelarme <gdelarme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/18 17:31:30 by gdelarme          #+#    #+#             */
/*   Updated: 2021/11/19 17:16:15 by gdelarme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h" 
#include <stdlib.h>

char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	len;
	size_t	j;

	len = ft_strlen(s1);
	s2 = (char *)malloc(sizeof(*s1) * (len + 1));
	if (!s2)
		return (0);
	ft_memcpy(s2, s1, len + 1);
	return (s2);
}
