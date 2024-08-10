/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguidoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:11:50 by vguidoni          #+#    #+#             */
/*   Updated: 2022/10/14 16:12:08 by vguidoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void*))
{
	t_list	*k;

	if (lst == 0)
		return ;
	while (*lst != 0)
	{
		k = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = k;
	}
	*lst = NULL;
}
