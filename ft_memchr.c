/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguidoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:30:48 by vguidoni          #+#    #+#             */
/*   Updated: 2022/10/06 15:31:03 by vguidoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	j;

	j = 0;
	while (j < n)
	{
		if (((unsigned char *)s)[j] == (unsigned char )c)
		{
			return ((void *)(s + j));
		}
		j++;
	}
	return (0);
}
