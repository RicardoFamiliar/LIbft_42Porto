/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricada-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 18:11:09 by ricada-s          #+#    #+#             */
/*   Updated: 2022/11/16 18:43:29 by ricada-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
		return (1);
	return (0);
}
/*
#include <ctype.h>
int main (void)
{
	char x = '+';
	char p = '2';
	printf("\nFT_ISALNUM, 1st value is : %d but after is %d\n", x, ft_isalnum(x));
	printf("ALNUM, 1st value is : %d but after is %d\n", x, isalnum(x));
	printf("FT_ALNUM, 1st value is : %d but after is %d\n", p, ft_isalnum(p));
	printf("ALNUM, 1st value is : %d but after is %d\n", p, isalnum(p));
}*/
