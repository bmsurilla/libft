/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 15:19:52 by bsurilla          #+#    #+#             */
/*   Updated: 2026/05/28 18:10:14 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*new;
	
	new = malloc (sizeof(t_list));
	if (!new)
		return (NULL);
	new->content = content;
	new->next = NULL;
	return (new);
} 
/*
#include <stdio.h>

void	ft_printtester(t_list *start)
{
	while (start != NULL)
	{
		printf("%s\n", (char *)start->content);
		start = start->next;
	}
}

int	main (void)
{
	t_list	*start = NULL;
	t_list	*node1 = NULL;
	t_list	*node2 = NULL;
	//t_list	*node3 = NULL;
	char content_start[] = "a";
	char content1[] = "b";
	char content2[] = "c";
	//char content3[] = "d";
	
	start = ft_lstnew(content_start);
	node1 = ft_lstnew(content1);
	node2 = ft_lstnew(content2);
	//node3 = ft_lstnew(content3);
	
	start->next = node1;
	node1->next = node2;
	//ft_lstadd_front(&start, node3);
	ft_printtester(start);
}
*/
