/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricada-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 20:45:35 by ricada-s          #+#    #+#             */
/*   Updated: 2022/11/16 20:09:09 by ricada-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*source;
	unsigned char	*dest;

	if (dst == NULL && src == NULL)
		return (NULL);
	i = 0;
	source = (unsigned char *)src;
	dest = (unsigned char *)dst;
	while (i < n)
	{
		dest[i] = source[i];
		i++;
	}
	return (dst);
}
/*
int main(void)
{
	char src[50] = "testandocuidado";
	char dest[50];
	char *ret;

	ret = ft_memcpy(dest, src, 5);
	printf("%s\n", ret);
	return (0);
}*/
