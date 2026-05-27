/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/27 17:46:19 by bsurilla          #+#    #+#             */
/*   Updated: 2026/05/27 18:48:53 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int				len;
	char			*mapi;
	unsigned int	i;

	len = ft_strlen(s);
	mapi = malloc (len + 1);
	if (!mapi)
		return (NULL);
//	if (s == 0 || f == 0)
//		return ;	
	i = 0;
	while (s[i] != 0)
	{
		mapi[i] = f(i, s[i]);
		i++;
	}
	mapi[i] = '\0';
	return (mapi);
}
/*
#include <stdio.h>
char	ft_lower (unsigned int i, char c)
{
	(void) i;
	c = ft_tolower(c);
	return (c);
}

int main (void)
{
char str[] = "DUDE CALM DOWN";
char *str2;

str2 = ft_strmapi(str, ft_lower);
printf("%s\n", str2);
}
*/
