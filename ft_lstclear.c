/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gdelarme <gdelarme@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/30 21:25:07 by gdelarme          #+#    #+#             */
/*   Updated: 2021/11/30 21:47:16 by gdelarme         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*next_elt;

	if (!lst || !del)
		return ;
	while (*lst)
	{
		next_elt = (*lst)->next;
		del((*lst)->content);
		free((*lst));
		*lst = next_elt;
	}
}
