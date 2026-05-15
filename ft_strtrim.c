/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/15 20:40:10 by bsurilla          #+#    #+#             */
/*   Updated: 2026/05/15 21:47:48 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_setcheck(char const *set, char c)
{
	int f;
	
	f = 0;
	while (set[f] != 0)
	{
		if (s1 == set[f])
		{
			return(1);
		}
		f++;
	}
	return (0);
}


char	*ft_strtrim(char const *s1, char const *set)
{
	int		i;
	int		b;
	int 	s;
	char	*trimmed;
	int		slen;

}
