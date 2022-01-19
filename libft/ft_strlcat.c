/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelarme <gdelarme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:36:35 by gdelarme          #+#    #+#             */
/*   Updated: 2021/11/22 22:26:40 by gdelarme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	buff;
	size_t	dstsize;

	buff = ft_strlen(src);
	dstsize = ft_strlen(dst);
	if (size <= dstsize)
		buff += size;
	else
		buff += dstsize;
	i = 0;
	while (src[i] != '\0' && (dstsize + 1) < size)
	{
		dst[dstsize] = src[i];
		dstsize++;
		i++;
	}
	dst [dstsize] = '\0';
	return (buff);
}
