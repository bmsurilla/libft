/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 20:40:10 by bsurilla          #+#    #+#             */
/*   Updated: 2026/05/16 18:28:30 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_setcheck(char const *set, char c)
{
	int	f;

	f = 0;
	while (set[f] != 0)
	{
		if (c == set[f])
		{
			return (1);
		}
		f++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		b;
	char	*trimmed;
	int		len;
	int		tlen;

	len = ft_strlen(s1);
	i = 0;
	while (s1[i] != 0 && ft_setcheck(set, s1[i]) == 1)
	{
		i++;
	}
	b = len - 1;
	while (b >= 0 && ft_setcheck(set, s1[b]) == 1)
	{
		b--;
	}
	if (b < i)
		tlen = 0;
	else
		tlen = b - i + 1;
	trimmed = ft_substr (s1, i, tlen);
	return (trimmed);
}
/*
#include <stdio.h>
int	main(void)
{
	char	str[] = "abbaca";
	char	set[] = "abc";
	
	printf("trimmed str: %s\n",ft_strtrim(str,set));
}
*/
