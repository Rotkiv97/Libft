/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguidoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/08 19:26:01 by vguidoni          #+#    #+#             */
/*   Updated: 2022/10/13 16:30:41 by vguidoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdio.h>
#include<string.h>
#include <stdlib.h>
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*j;
	size_t	y;
	size_t	k;

	j = malloc(sizeof(char) * ft_strlen(s) + 1);
	y = 0;
	k = 0;
	if ((unsigned int)ft_strlen(s) < start)
		return (ft_strdup(""));
	while (s[y] && y < start)
	{
		y++;
	}
	while (s[y] != '\0' && (int)len > 0)
	{
		j[k] = s[y];
		y++;
		k++;
		len--;
	}
	j[k] = '\0';
	if (s[y] < j[k])
		return (NULL);
	return (j);
}
