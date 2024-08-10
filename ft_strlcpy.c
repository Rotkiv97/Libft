/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By:  vguidoni <marvin@42.fr>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/26 14:24:49 by  vguidoni         #+#    #+#             */
/*   Updated: 2022/07/26 14:37:07 by  vguidoni        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>
#include <stddef.h>

static size_t	ft_strlen(const char *str)
{
	size_t	a;

	a = 0;
	while (str[a] != '\0')
		a++;
	return (a);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	b;
	size_t	c;

	b = ft_strlen(src);
	c = 0;
	while (dst[c])
		c++;
	c = 0 ;
	if (size != 0)
	{
		while (src[c] != '\0' && c < size - 1)
		{
			dst[c] = src[c];
			c++;
		}
		dst[c] = '\0';
	}
	return (b);
}
/*
int	main()
{
	char src[] = "World!";
	char dst[] = "Hello ";
	int i; 
	i = ft_strlcpy(dst, src, 10);
	printf("%d\n", i);
	printf("%s", dst);
}*/
