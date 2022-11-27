/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricada-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 21:11:48 by ricada-s          #+#    #+#             */
/*   Updated: 2022/11/19 17:27:20 by ricada-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	if (n != 0)
	{
		ft_memset(s, '\0', n);
	}
}
/*
int main(void)
{
	char str[50] = "testando sempre";
	puts(str);
	ft_bzero(str, 2);
	puts(str);
	return (0);
}*/
