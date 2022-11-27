/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricada-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 00:48:34 by ricada-s          #+#    #+#             */
/*   Updated: 2022/11/16 18:38:02 by ricada-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}
/*
#include <ctype.h>
int main(void)
{
	int c;
	c = '9';
	printf("\n1st value is : %d but after is : %d\n", c, ft_isdigit(c));
	printf("1st value is : %d but after is : %d\n", c, isdigit(c));
}*/
