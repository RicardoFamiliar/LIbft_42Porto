/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricada-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/05 18:13:39 by ricada-s          #+#    #+#             */
/*   Updated: 2022/11/16 18:39:50 by ricada-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
/*
#include <ctype.h>
int main (void)
{
	char c;
	c = 'a';
	printf("\n1st value is : %d but afer is : %d\n", c, ft_isalpha(c));
	printf("1st value is : %d but after is : %d\n", c, isalpha(c));
}*/
