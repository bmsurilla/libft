/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 20:24:49 by bsurilla          #+#    #+#             */
/*   Updated: 2026/05/15 20:34:00 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long	nb;
	char	digit;

	nb = n;
	if (nb < 0)
	{
		write(1, "-", 1);
		nb = nb *(-1);
	}
	if (nb >= 10)
		ft_putnbr_fd(nb / 10, 1);
	digit = n % 10 + '0';
	write(fd, &digit, 1);
}
/*
int	main(void)
{
	ft_putnbr_fd(1134,1);
}
*/
