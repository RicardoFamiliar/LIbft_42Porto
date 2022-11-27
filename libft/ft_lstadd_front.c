/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricada-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 17:46:55 by ricada-s          #+#    #+#             */
/*   Updated: 2022/11/19 18:00:33 by ricada-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_front(t_list **alst, t_list *new)
{
	if (alst && new)
	{
		new->next = *alst;
		*alst = new;
	}
}
/*
int		main()
{
	t_list *head;
	if(!(head = malloc(sizeof(t_list))))
		return 0;

	head->content = (char *)"Primeiro";
	head->next = NULL;

	t_list *new;
	if(!(new = malloc(sizeof(t_list))))
		return 0;

	new->content = (char *)"Segundo";
	new->next = NULL;

	printf("\nHead - %s\n", (char *)head->content);

	ft_lstadd_front(&head, new);

	printf("Head - %s\n", (char *)head->content);
}*/
