/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguidoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 10:38:16 by vguidoni          #+#    #+#             */
/*   Updated: 2022/10/09 10:38:33 by vguidoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	k;
	int		y;

	k = (unsigned char)c;
	y = ft_strlen((char *)s);
	if (k == '\0')
		return ((char *)(&s[y]));
	while (y >= 0)
	{
		if (s[y] == k)
			return ((char *)(&s[y]));
		y--;
	}
	return (NULL);
}
