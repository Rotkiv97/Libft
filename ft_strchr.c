/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguidoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 10:20:57 by vguidoni          #+#    #+#             */
/*   Updated: 2022/10/06 10:21:18 by vguidoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>
#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	k;
	int		y;

	y = 0;
	k = (unsigned char)c;
	while (s[y] != '\0')
	{
		if (s[y] == k)
			return ((char *)(&s[y]));
		y++;
	}
	if (k == '\0')
		return ((char *)(&s[y]));
	return (NULL);
}
