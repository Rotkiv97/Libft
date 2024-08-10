/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguidoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 17:26:22 by vguidoni          #+#    #+#             */
/*   Updated: 2022/10/07 10:31:25 by vguidoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<string.h>
#include <stdio.h>
#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	char		*s1;
	const char	*s2;
	size_t		y;

	s1 = (char *)dest;
	s2 = (const char *)src;
	y = 0;
	if (dest > src)
	{
		while (y < n)
		{
			s1[n - y - 1] = s2[n - y - 1];
			y++;
		}
	}
	else
	{
		ft_memcpy(s1, s2, n);
	}
	return (dest);
}
/*
int main(void)
{
	char scr[] ="ciao come va";
	char scr1[] ="ciao come va";
	memmove(scr + 3, scr, 4);
	printf("memmove   : %s\n", scr); 
	ft_memmove(scr1 + 3, scr1, 4);
	printf("ft_memmove: %s\n", scr1);
}*/
