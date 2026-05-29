/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 14:36:43 by bsurilla          #+#    #+#             */
/*   Updated: 2026/05/27 17:04:01 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_intlen(long long n)
{
	int	i;

	i = 0;
	if (n <= 0)
	{
		i++;
	}
	while (n != 0)
	{
		n = n / 10;
		i++;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	long long	nb;
	size_t		len;
	char		*str;

	nb = n;
	len = ft_intlen(nb);
	str = malloc(len + 1);
	if (!str)
		return (NULL);
	str[len] = '\0';
	if (nb < 0)
	{
		str[0] = '-';
		nb *= -1;
	}
	if (nb == 0)
		str[0] = '0';
	while (len > (n < 0))
	{
		str[--len] = (nb % 10) + '0';
		nb /= 10;
	}
	return (str);
}

// #include <stdio.h>
// int main ()
// {
// 	#include <limits.h>
// 	printf("%s\n",ft_itoa(-155));
// 	printf("----------------\n");
// 	printf("%s\n",ft_itoa(INT_MIN));
// 	// printf("%s\n",ft_itoa(0));
// }

