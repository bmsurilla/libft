/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/20 16:29:13 by bsurilla          #+#    #+#             */
/*   Updated: 2026/04/29 16:57:58 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isalpha(int c)
{
	if (!((c <= 'Z' && c >= 'A') || (c <= 'z' && c >= 'a')))
		return (0);
	return (1);
}
// #include <stdio.h>
// int	main (void)
// {
// 	int	c;
// 	c = '6';

// 	printf("this is the int: %c,\n 1 for YES and 0 for NO: %d\n", (char)c, ft_isalpha(c));
// }