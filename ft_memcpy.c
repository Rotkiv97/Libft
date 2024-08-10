/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguidoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:27:55 by vguidoni          #+#    #+#             */
/*   Updated: 2022/10/05 16:28:17 by vguidoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include <stdio.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t		j;
	char		*i;
	const char	*k;

	j = 0;
	i = dest;
	k = src;
	while (j < n)
	{
		i[j] = k[j];
		j++;
	}
	return (dest);
}
