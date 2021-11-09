/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelarme <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 21:33:27 by gdelarme          #+#    #+#             */
/*   Updated: 2021/11/08 21:49:57 by gdelarme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"libft.h"
#include<stdio.h>

int	ft_isalnum(int c)
{
	return(ft_isalpha(c) || ft_isdigit(c));
}
/*
int main(void)
{
	int	result;

	result = ft_isalnum('/');
	printf("%d\n", result);
}*/
