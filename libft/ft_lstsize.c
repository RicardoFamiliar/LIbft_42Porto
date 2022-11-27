/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricada-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/12 18:07:42 by ricada-s          #+#    #+#             */
/*   Updated: 2022/11/19 18:38:08 by ricada-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//counts the nodes in a list

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	unsigned int	size;

	size = 0;
	while (lst)
	{
		lst = lst->next;
		size++;
	}
	return (size);
}
/*
int		main()
{
	t_list *head;
	t_list *last;

	t_list *dois;
	t_list *tres;



	if (!(head = malloc(sizeof(t_list))))
		return 0;

	head->content = "1";
	head->next = NULL;

	if (!(dois = malloc(sizeof(t_list))))
		return 0;

	dois->content = "2";
	dois->next = NULL;

	if (!(tres = malloc(sizeof(t_list))))
		return 0;

	tres->content = "3";
	tres->next = NULL;

	last = head;

	while (last->next != NULL)
		last = last->next;
	last->next = dois;

	last = head;

	while (last->next != NULL)
		last = last->next;
	last->next = tres;

	printf("%s -- %s -- %s -- %p\n", (char *)head->content,
	(char *)head->next->content,
							 (char *)head->next->next->content,
	head->next->next->next);

	printf("%d\n", ft_lstsize(head));

}*/
