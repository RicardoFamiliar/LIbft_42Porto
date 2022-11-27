/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricada-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 21:52:50 by ricada-s          #+#    #+#             */
/*   Updated: 2022/11/16 18:54:35 by ricada-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		c = (c - 'A' + 'a');
	}
	return (c);
}
/*
int main (void)
{
	char l;
	l = 'F';
	printf("\nFT_TOLOWER, 1st value is : %d but after is %d\n", l, ft_tolower(l));
	printf("TOLOWER, 1st value is : %d but after is %d\n", l, tolower(l));
}*/
