/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricada-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 19:19:00 by ricada-s          #+#    #+#             */
/*   Updated: 2022/11/16 20:29:02 by ricada-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}
/*
int main (void)
{
	char print, x;
	x = '+';
	print = 31;
	printf("1st value is : %d but after is %d\n", x, ft_isprint(x));
	printf("1st value is : %d but after is %d\n", x, isprint(x));
	printf("1st value is : %d but after is %d\n", print, ft_isprint(print));
	printf("1st value is : %d but after is %d\n", print, isprint(print));
}*/
