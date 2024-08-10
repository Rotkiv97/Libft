/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguidoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/14 16:13:28 by vguidoni          #+#    #+#             */
/*   Updated: 2022/10/14 16:13:40 by vguidoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*y;
	t_list	*k;

	if (lst == NULL)
		return (NULL);
	y = NULL;
	while (lst != 0)
	{
		k = ft_lstnew((*f)(lst->content));
		if (k == NULL)
			ft_lstclear(&k, (*del));
		else
			ft_lstadd_back(&y, k);
		lst = lst-> next;
	}
	return (y);
}
