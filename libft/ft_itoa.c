/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelarme <gdelarme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/24 20:00:12 by gdelarme          #+#    #+#             */
/*   Updated: 2021/11/25 21:02:15 by gdelarme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	getsize(int n)
{
	int	size;

	size = 0;
	if (n < 0)
	{
		n *= -1;
		size++;
	}
	while (n > 0)
	{
		n /= 10;
		size++;
	}
	return (size);
}

int	cleannegative(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

char	*putstr(int n, char *str, int i, int size)
{
	int	n_aux;

	n_aux = cleannegative(n);
	while (i >= 0)
	{
		if (n < 0 && i == 0)
			str[i] = '-';
		else
		{
			str[i] = n_aux % 10 + 48;
			n_aux /= 10;
		}
		i--;
	}
	str[size] = '\0';
	return (str);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		size;
	int		i;

	if (n >= -2147483648 && n <= 2147483647)
	{
		if (n == -2147483648)
			return (ft_strdup("-2147483648"));
		else if (n == 0)
			return (ft_strdup("0"));
		size = getsize(n);
		str = malloc(sizeof(*str) * (size + 1));
		if (!str)
			return (0);
		i = size - 1;
		str = putstr(n, str, i, size);
		return (str);
	}
	return (0);
}
