/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 18:15:57 by bsurilla          #+#    #+#             */
/*   Updated: 2026/05/06 20:21:45 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int				i;
	char			*str;
	unsigned char	chr;

	str = (char *)s;
	chr = (unsigned char) c;
	i = 0;
	while (str[i] != 0)
	{
		if (str[i] == chr)
			return (&str[i]);
		i++;
	}
	if (chr == 0)
		return (&str[i]);
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main (void)
{
	char str[] = "I'm not moving";
	int c;

	c = 'h' ;
	printf("this is what you are looking for: %c\n",c);
	printf("your str: %s\n",str);
	printf("ft_strchr: %s\n",ft_strchr(str,c));
	printf("strchr: %s\n",strchr(str,c));
}
*/
