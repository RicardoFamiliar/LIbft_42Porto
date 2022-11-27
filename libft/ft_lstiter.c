/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricada-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 18:46:54 by ricada-s          #+#    #+#             */
/*   Updated: 2022/11/19 17:48:58 by ricada-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstiter(t_list *lst, void (*f)(void *))
{
	t_list	*next;

	if (lst != NULL)
	{
		next = lst;
		while (1)
		{
			(*f)(next->content);
			next = next->next;
			if (next == NULL)
				return ;
		}
	}
}
/*
void f(void *nome)
{
	char *a = " 100 ";
	ft_strlcpy(nome, a, ft_strlen(a) + 1);
}

int		main()
{
	t_list *head;
	t_list *um;
	t_list *dois;
	t_list *tres;

	char *c1 = ft_strdup(" Um ");
	char *c2 = ft_strdup(" Dois ");
	char *c3 = ft_strdup(" Tres ");
	char *c4 = ft_strdup(" Quatro ");

	head = ft_lstnew(c1);
	um = ft_lstnew(c2);
	dois = ft_lstnew(c3);
	tres = ft_lstnew(c4);

	ft_lstadd_back(&head, um);
	ft_lstadd_back(&head, dois);
	ft_lstadd_back(&head, tres);

	int size;
	size = ft_lstsize(head);
	t_list *start;
	start = head;

	for(int i = 0; i < size; i++)
	{
		printf("%s", (char *)head->content);
		head = head->next;
	}

	head = start;

	ft_lstiter(head, f);
	printf("\n");

	for(int i = 0; i < size; i++)
	{
		printf("%s", (char *)head->content);
		head = head->next;
	}


	return (0);
}
*/
