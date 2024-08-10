/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguidoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:25:04 by vguidoni          #+#    #+#             */
/*   Updated: 2022/10/10 16:25:08 by vguidoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include<stdio.h>
#include<string.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*y;
	size_t	f;

	f = 0;
	y = malloc(ft_strlen((char *)s) + 1);
	if (!y)
		return (NULL);
	while (s[f] != '\0')
	{
		y[f] = s[f];
		f++;
	}
	y[f] = '\0';
	return (y);
}
/*
int main()
{
    char source[] = "GeeksForGeeks";
 
    // A copy of source is created dynamically
    // and pointer to copy is returned.
    char* target = ft_strdup(source);
 
    printf("%s", target);
    return 0;
}*/
