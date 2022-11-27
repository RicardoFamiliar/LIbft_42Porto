/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricada-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 18:43:09 by ricada-s          #+#    #+#             */
/*   Updated: 2022/11/16 20:15:03 by ricada-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}
/*
int main (void)
{
	char n, x;
	x = '+';
	n = 128;

	printf("\nFT_ISASCII, 1st value is : %d but after is %d\n", x, ft_isascii(x));
	printf("ASCII, 1st value is : %d but after is %d\n", x, isascii(x));
	printf("FT_ISASCII, 1st value is : %d but after is %d\n", n, ft_isascii(n));
	printf("ASCII, 1st value is : %d but after is %d\n", n, isascii(n));
}
*/
