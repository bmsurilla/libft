/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 19:00:55 by bsurilla          #+#    #+#             */
/*   Updated: 2026/05/15 16:09:25 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *nptr)
{
	int			i;
	int			sign;
	long long	digit;

	i = 0;
	while (nptr[i] != 0 && (nptr[i] == 32 || (nptr[i] <= 13 && nptr[i] >= 9)))
	{
		i++;
	}
	sign = 1;
	while (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i - 1] == '+' || nptr[i - 1] == '-')
			return (0);
		if (nptr[i] == '-')
			sign = sign * (-1);
		i++;
	}
	digit = 0;
	while (nptr[i] <= '9' && nptr[i] >= '0')
	{
		digit = digit * 10 + (nptr[i] - '0');
		i++;
	}
	return (digit * sign);
}
