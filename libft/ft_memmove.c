/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelarme <gdelarme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/10 21:43:51 by gdelarme          #+#    #+#             */
/*   Updated: 2021/11/18 18:26:50 by gdelarme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	size_t	n;

	i = 0;
	n = len - 1;
	if (!dst && !src)
		return (0);
	if (dst > src)
	{
		while (i < len)
		{
			((char *)dst)[n - i] = ((char *)src)[n - i];
			i++;
		}
	}
	else
	{
		while (i < len)
		{	
			((char *)dst)[i] = ((char *)src)[i];
			i++;
		}
	}
	return (dst);
}
