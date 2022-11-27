/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricada-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 20:18:19 by ricada-s          #+#    #+#             */
/*   Updated: 2022/11/19 17:29:28 by ricada-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t n)
{
	unsigned char	*buffer;
	size_t			i;

	buffer = b;
	i = 0;
	while (i < n)
	{
		buffer[i] = (unsigned char)c;
		i++;
	}
	return ((void *)buffer);
}
/*
int main(void)
{
	char str[50];
	strcpy(str, "testa aqui o replacement");
	puts(str);
	ft_memset(str, 'X', 10);
	puts(str);
	return (0);
}*/
