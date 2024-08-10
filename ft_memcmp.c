/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguidoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:36:01 by vguidoni          #+#    #+#             */
/*   Updated: 2022/10/07 10:35:32 by vguidoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*j;
	char	*k;

	i = 0;
	j = (char *)s1;
	k = (char *)s2;
	while (i < n && j[i] == k[i])
	{
		i++;
	}
	if ((i - n) == 0)
	{
		return (0);
	}
	return (((unsigned char *)j)[i] - ((unsigned char *)k)[i]);
}
