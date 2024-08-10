/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguidoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 16:07:17 by vguidoni          #+#    #+#             */
/*   Updated: 2022/10/10 16:07:33 by vguidoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_string(char const *str, char c)
{
	size_t	st;
	size_t	y;

	y = 0;
	st = 0;
	while (str[y])
	{
		while (str[y] == c)
			y++;
		if (str[y] != c && str[y])
			st++;
		while (str[y] != c && str[y])
			y++;
	}
	return (st);
}

static char	*ft_create_string(char const *str, char c)
{
	char	*k;
	int		y;

	y = 0;
	while (str[y] && str[y] != c)
		y++;
	k = (char *) malloc(sizeof(char) * (y + 1));
	if (!k)
		return (NULL);
	ft_strlcpy(k, str, y + 1);
	return (k);
}

static void	*ft_free(char **ptr, int i)
{
	while (i > 0)
		free (ptr[i--]);
	free(ptr);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	int		y;
	int		len;
	char	**ptr;

	if (!s)
		return (NULL);
	len = ft_string(s, c);
	ptr = (char **) malloc(sizeof(char *) * (len +1));
	if (!ptr)
		return (NULL);
	y = -1;
	while (++y < len)
	{
		while (s[0] == c)
			s++;
		ptr[y] = ft_create_string(s, c);
		if (!ptr[y])
			return (ft_free(ptr, y));
		s = s + ft_strlen(ptr[y]);
	}
	ptr[y] = 0;
	return (ptr);
}
