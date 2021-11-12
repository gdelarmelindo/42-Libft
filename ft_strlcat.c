/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelarme <gdelarme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/12 19:36:35 by gdelarme          #+#    #+#             */
/*   Updated: 2021/11/12 21:04:55 by gdelarme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"

size_t	ft_strlcat(char *restrict dst, const char *restrict src, size_t size)
{
	size_t	i;
	size_t	buff;
	size_t	dstsize;

	i = 0;
	buff = 0;
	dstsize = 0;
	while (src[buff] != '\0')
		buff++;
	while (dst[dstsize] != '\0')
		dstsize++;
	if (size <= dstsize)
		buff += size;
	else
		buff += dstsize;
	while (src[i] != '\0' && (dstsize + 1) < size)
	{
		dst[dstsize] = src[i];
		dstsize++;
		i++;
	}
	dst [dstsize] = '\0';
	return (buff);
}
