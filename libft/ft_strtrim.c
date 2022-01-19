/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelarme <gdelarme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/19 19:33:32 by gdelarme          #+#    #+#             */
/*   Updated: 2021/11/22 22:26:23 by gdelarme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	getposition(char const *str, char const *set, int way, int start)
{
	while (way > 0 && str[start] != '\0' && ft_strchr(set, str[start]))
		start++;
	while (way < 0 && start >= 0 && ft_strchr(set, str[start]))
		start--;
	if (start < 0)
		return (0);
	else
		return (start);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int	substr_start;
	int	substr_end;
	int	substr_len;

	if (!s1 || !set)
		return (0);
	substr_start = getposition(s1, set, 1, 0);
	if (substr_start == (int)ft_strlen(s1))
		substr_len = 0;
	else
	{
		substr_end = getposition(s1, set, -1, (ft_strlen(s1) - 1));
		substr_len = (substr_end - substr_start) + 1;
	}
	return (ft_substr(s1, substr_start, substr_len));
}
