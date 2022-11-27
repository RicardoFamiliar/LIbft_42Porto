/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricada-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 18:12:17 by ricada-s          #+#    #+#             */
/*   Updated: 2022/11/19 18:38:40 by ricada-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstlast(t_list *lst)
{
	while (lst)
	{
		if (!lst->next)
			return (lst);
		lst = lst->next;
	}
	return (lst);
}
/*
int		main()
{
	t_list *head;
	t_list *dois;
	t_list *tres;
	t_list *quatro;
	t_list *last;

	head = ft_lstnew("1");
	dois = ft_lstnew("2");
	tres = ft_lstnew("3");
	quatro = ft_lstnew("4");

	head->next = dois;
	dois->next = tres;
	tres->next = quatro;

	printf("\nthe last t_list is -- %s -- pointer of %p \n",
	(char *)quatro->content, quatro->next);

	last = ft_lstlast(head);

	printf("the last t_list is -- %s -- pointer of %p \n",
	(char *)last->content, last->next);
}*/
