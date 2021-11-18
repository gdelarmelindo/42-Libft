/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelarme <gdelarme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 18:08:31 by gdelarme          #+#    #+#             */
/*   Updated: 2021/11/18 18:27:14 by gdelarme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *restrict dst,
					const char *restrict src,
					size_t dstsize)
{
	size_t	i;
	size_t	buff;

	i = 0;
	buff = 0;
	while (src[buff] != '\0')
		buff++;
	if (dstsize > 0)
	{
		while (src[i] != '\0' && i < (dstsize - 1))
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (buff);
}
