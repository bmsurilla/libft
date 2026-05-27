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
	char		*intstr;

	nb = n;
	len = ft_intlen(nb);
	intstr = malloc(len + 1);
	if (!intstr)
		return (NULL);
	intstr[len] = '\0';
	if (nb < 0)
	{
		intstr[0] = '-';
		nb = nb * (-1);
	}
	if (nb == 0)
		intstr[len - 1] = '0';
	while (len-- > 0)
	{
		if (intstr[len] == '-')
			return (intstr);
		intstr[len] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (intstr);
}
/*
#include <stdio.h>
int main ()
{
	printf("%s\n",ft_itoa(-7256));
	printf("%s\n",ft_itoa(7256));
	printf("%s\n",ft_itoa(0));
}
*/
