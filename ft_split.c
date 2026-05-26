/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/16 18:35:02 by bsurilla          #+#    #+#             */
/*   Updated: 2026/05/26 18:06:59 by bsurilla         ###   ########.fr       */
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

static void ft_freemem(char **words, int w)
{
    while (w > 0)
    {
        w--;
        free(words[w]);
    }
    free(words);
}

static void ft_arrayfill(char *str, char c, char ** words)
{
	int     i;
    int     w;
    size_t  wordlen;

    i = 0;
    w = 0;
    while (str[i] != '\0')
    {   
        while (str[i] == c)
            i++;
        if (str[i] == '\0')
            return;
        wordlen = 0;
        while (str[i + wordlen] != 0 && str [i + wordlen] != c)
            wordlen++;
        words[w] = ft_substr(str, i, wordlen);
        if (!words[w])
        {
            ft_freemem(words,w);
            return;
        }
        w++;
        i = i + wordlen;
    } 
    words[w] = NULL;
}

char	**ft_split(char const *s, char c)
{
    int     wordcount;
    char    **splitwords;

    if (s == 0)
        return (NULL);

    wordcount = ft_wordcount((char *)s,c);
    splitwords = malloc ((wordcount + 1) * sizeof(*splitwords));
    if (!splitwords)
        return (NULL);
    ft_arrayfill((char *)s, c, splitwords);
    return (splitwords);
}

#include <stdio.h>
int main(void)
{
    char str[] = ",,Rome,,Manila,Cleveland,any where really...";
    char c = ',';
    char **result;
    int i = 0;

    result = ft_split(str, c);
    if (!result)
        return (1);

    while (result[i])
    {
        printf("I'd rather be in: %s\n", result[i]);
        i++;
    }
}