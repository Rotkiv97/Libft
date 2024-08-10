/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguidoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 15:36:47 by vguidoni          #+#    #+#             */
/*   Updated: 2022/10/06 15:37:09 by vguidoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<string.h>
#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*y;
	const char	*k;
	size_t		j;
	size_t		l;

	y = big;
	k = little;
	j = 0;
	if (k[0] == '\0')
		return ((char *)y);
	while (y[j] != '\0')
	{
		l = 0;
		while (y[j + l] == k[l] && (l + j) < len)
		{
			if (y[j + l] != '\0' && k[l] == '\0')
				return ((char *)&y[j]);
			l++;
		}
		if (k[l] == '\0')
			return ((char *)y + j);
		j++;
	}
	return (0);
}
