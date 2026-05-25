/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 18:35:02 by bsurilla          #+#    #+#             */
/*   Updated: 2026/05/18 19:06:47 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int  ft_wordcount(char *str, char c)
{
    int i;
    int word;

    i = 0;
    word = 0;
    while (str[i] != 0)
    {
        if (str[i] != c && ((i == 0) || (str[i - 1] == c)))
        {
            word++;
        }
        i++;
    }
    return (word);
}

static size_t   ft_wordlen(char *str, char c)
{
    int i;

    while (word[i] != 0)
    {


    }
}


char	**ft_split(char const *s, char c)
{
    int     i;
    int     word;
    char    **splitwords;
    int     wordlen;

    word = ft_wordcount(s,c);
    splitwords = malloc (word + 1);
    if (!splitwords)
        return (NULL);

}
