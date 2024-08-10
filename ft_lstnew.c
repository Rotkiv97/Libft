/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguidoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/12 09:40:00 by vguidoni          #+#    #+#             */
/*   Updated: 2022/10/12 09:40:27 by vguidoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>
#include "libft.h"

t_list	*ft_lstnew(void *content)
{	
	t_list	*nodo;

	nodo = (t_list *)malloc(sizeof(t_list));
	nodo->content = content;
	nodo->next = NULL;
	return (nodo);
}
