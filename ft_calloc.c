/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/08 19:25:20 by bsurilla          #+#    #+#             */
/*   Updated: 2026/05/15 16:12:48 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t			i;
	unsigned char	*ptr;
	size_t			total;

	total = nmemb * size;
	i = 0;
	if (nmemb == 0 || size == 0)
		return (malloc(1));
	if (size != 0 && SIZE_MAX / size < nmemb)
		return (NULL);
	ptr = malloc(total);
	if (!ptr)
		return (NULL);
	ft_bzero(ptr, total);
	return (ptr);
}
/*
#include <stdio.h>
int	main(void)
{
	size_t	need;
	size_t	size;
	int		*array;
	int		i;

	need = SIZE_MAX;
	size = sizeof(int);
	array = ft_calloc(need,size);

	if (!array)
	{
		printf("calloc failed\n");
		return(1);
	}
	i = 0;
	while (i < (int)need)
	{
		printf("%d", array[i]);
		i++;
	}
	free(array);
	return (0);
}
*/
