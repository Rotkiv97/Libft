/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguidoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:30:07 by vguidoni          #+#    #+#             */
/*   Updated: 2022/10/11 18:30:26 by vguidoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	ft_putendl_fd(char *s, int fd)
{
	unsigned int	k;

	k = 0;
	write(fd, &s[k], ft_strlen(s));
	write(fd, &"\n", 1);
}
