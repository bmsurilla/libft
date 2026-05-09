/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/04 16:49:48 by bsurilla          #+#    #+#             */
/*   Updated: 2026/05/06 20:17:59 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	len;

	len = 0;
	i = 0;
	while (src[len] != 0)
	{
		len++;
	}
	if (size > 0)
	{
		while (src[i] != 0 && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (len);
}
/*
#include <stdio.h>
int main(void)
{
	char src[] = "Hello";
	char dst[3];
	size_t result;

	result = ft_strlcpy(dst, src,4);
	printf("src: %s\n",src);
	printf("dst: %s\n",dst);
	printf("returned length: %zu\n",result);
	return (0);
}
*/
