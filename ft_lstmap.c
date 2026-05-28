/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bsurilla <bsurilla@student.42vienna.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/28 22:37:33 by bsurilla          #+#    #+#             */
/*   Updated: 2026/05/28 23:03:11 by bsurilla         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void*))
{
	t_list	*lstcpy;
	t_list	*nodecpy;

//	if (!lst || !f || !del)
//		return (NULL);
	lstcpy = NULL;
	while (lst != 0)
	{
		nodecpy = ft_lstnew(f(lst->content));
		if (!nodecpy)
		{
			ft_lstclear(&lstcpy, del);
			return (NULL);
		}
		ft_lstadd_back(&lstcpy,nodecpy);
		lst = lst->next;
	}
	return (lstcpy);
}

#include <stdio.h>

void	ft_printtester(t_list *start)
{
	while (start != NULL)
	{
		printf("%s\n", (char *)start->content);
		start = start->next;
	}
	printf("\n");
}
static void	ft_upper(void *c)
{
	char *str;
	
	str = (char *)c;
	*str = ft_toupper(*str);
}
int	main (void)
{
	t_list	**start = NULL;
	t_list	*node1 = NULL;
	t_list	*node2 = NULL;
	t_list	*node3 = NULL;
	t_list	*node4 = NULL;
	char	content1[] = "b";
	char	content2[] = "c";
	char	content3[] = "d";
	char	content4[] = "o";
	node1 = ft_lstnew(content1);
	node2 = ft_lstnew(content2);
	node3 = ft_lstnew(content3);
	node4 = ft_lstnew(content4);

	start = &node1;
	node1->next = node2;
	node2->next = node3;
		
	ft_lstadd_back(start, node4);
	ft_printtester(*start);
	
	ft_lstiter(*start,ft_upper);
	ft_printtester(*start);	
}

