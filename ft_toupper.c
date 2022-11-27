/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricada-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 21:44:48 by ricada-s          #+#    #+#             */
/*   Updated: 2022/11/19 18:37:25 by ricada-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c = (c - 'a' + 'A');
	}
	return (c);
}
/*
int main (void)
{
	char u;
	u = 'f';
	printf("\nFT_TOUPPER, 1st value is : %d but after is %d\n", u, ft_toupper(u));
	printf("FT_TOUPPER, 1st value is : %d but after is %d\n", u, toupper(u));
}*/
