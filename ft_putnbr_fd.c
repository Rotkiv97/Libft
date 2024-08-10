/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vguidoni <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/11 18:41:56 by vguidoni          #+#    #+#             */
/*   Updated: 2022/10/11 18:42:19 by vguidoni         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <unistd.h>

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	c;

	if (n < 0)
	{
		write(fd, "-", 1);
		c = (unsigned int)n * -1;
	}
	else
		c = (unsigned int)n;
	if (c >= 10)
		ft_putnbr_fd(c / 10, fd);
	ft_putchar_fd((unsigned int )(c % 10 + 48), fd);
}
