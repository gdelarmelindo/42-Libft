/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelarme <gdelarme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 16:27:47 by gdelarme          #+#    #+#             */
/*   Updated: 2021/11/19 17:05:59 by gdelarme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*substr;
	size_t	substr_size;
	size_t	i;

	if (!s)
		return (0);
	substr_size = ft_strlen(s);
	if (start >= substr_size)
		len = 0;
	else if (len > substr_size - start)
		len = substr_size - start;
	substr = malloc(sizeof(*substr) * (len + 1));
	if (substr == NULL)
		return (0);
	i = 0;
	while (i < len)
	{
		substr[i] = ((char *)s)[start + i];
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
