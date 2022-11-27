/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricada-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 18:20:20 by ricada-s          #+#    #+#             */
/*   Updated: 2022/11/19 18:38:52 by ricada-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*tmp;

	if (alst)
	{
		if (*alst == NULL)
			*alst = new;
		else
		{
			tmp = ft_lstlast(*(alst));
			tmp->next = new;
		}
	}
}
/*
int		main()
{
	t_list *head;
	t_list *dois;
	t_list *tres;
	t_list *quatro;

	if(!(head = malloc(sizeof(t_list))))
		return 0;
	head->content = " 1 ";
	head->next = NULL;

	if(!(dois = malloc(sizeof(t_list))))
		return 0;
	dois->content = " 2 ";
	dois->next = NULL;

	if(!(tres = malloc(sizeof(t_list))))
		return 0;
	tres->content = " 3 ";
	tres->next = NULL;

	if(!(quatro = malloc(sizeof(t_list))))
		return 0;
	quatro->content = " 4 ";
	quatro->next = NULL;


	head->next = dois;
	head->next->next = tres;

	printf("Rows %s %s %s %p", (char *)head->content,
	(char *)head->next->content,
									(char *)head->next->next->content,
									head->next->next->next);

	ft_lstadd_back(&head, quatro);

	printf("\nRows %s %s %s %s %p", (char *)head->content,
	(char *)head->next->content,
										(char *)head->next->next->content,
										(char *)head->next->next->next->content,
										head->next->next->next->next);
	return(0);
}*/
