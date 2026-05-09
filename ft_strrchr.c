/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/02 18:44:05 by bsurilla          #+#    #+#             */
/*   Updated: 2026/05/06 20:24:01 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int	length(char *str)
{
	int	i;

	i = 0;
	while (str[i] != 0)
	{
		i++;
	}
	return (i);
}

char	*ft_strrchr(const char *s, int c)
{
	int				i;
	char			*str;
	int				len;
	unsigned char	chr;

	str = (char *)s;
	chr = (unsigned char) c;
	len = length(str);
	i = len - 1;
	if (chr == 0)
		return (&str[len]);
	while (str[i] != 0)
	{
		if (str[i] != chr)
			i--;
		else
			return (&str[i]);
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>
int main (void)
{
	char str[] = "I'm not moving";
	int c;

	c = '\0';
	printf("this is what you are looking for: %c\n",c);
	printf("your str: %s\n",str);
	printf("ft_strchr: %s\n",ft_strrchr(str,c));
	printf("strchr: %s\n",strrchr(str,c));
}
*/
