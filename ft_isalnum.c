/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 16:29:13 by bsurilla          #+#    #+#             */
/*   Updated: 2026/04/29 17:02:42 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (!((c <= '9' && c >= '0') || (c <= 'Z' && c >= 'A')
			|| (c <= 'z' && c >= 'a')))
		return (0);
	return (1);
}
#include <stdio.h>
int	main (void)
{
	int	c;
	c = 42;

	printf("this is the int: %c,\n 1 for YES and 0 for NO: %d\n", (char)c, ft_isalnum(c));
	
}