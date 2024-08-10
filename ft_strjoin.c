/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguidoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 17:25:01 by vguidoni          #+#    #+#             */
/*   Updated: 2022/10/09 17:25:11 by vguidoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include "libft.h"
#include <stdlib.h>

char	*ft_strjoin(const char *s1, const char *s2)
{
	char			*l;
	unsigned int	p;
	unsigned int	k;

	p = 0;
	k = 0;
	l = (char *)malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!l)
		return (NULL);
	while (s1[p] != '\0')
	{
		l[p] = s1[p];
		p++;
	}
	while (s2[k] != '\0')
	{
		l[p + k] = s2[k];
		k++;
	}
	l[p + k] = '\0';
	return (l);
}
