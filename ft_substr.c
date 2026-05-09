/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/09 19:10:48 by bsurilla          #+#    #+#             */
/*   Updated: 2026/05/09 22:01:51 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	slen;
	char	*sub;

	slen = ft_strlen(s);
	sub = malloc (len + 1);
	if (!sub)
		return (NULL);
	i = 0;
	while (i < len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[len] = '\0';
	return (sub);
}
/*
#include <stdio.h>
int	main(void)
{
	int		start;
	size_t	len;
	char	str[] = "reversed and remixed";
	
	start = 9;
	len = 23;

	printf("orig str: %s\n",str);
	printf("substr: %s\n",ft_substr(str,start,len));
}
*/
