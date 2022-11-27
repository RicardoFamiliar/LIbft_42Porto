/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricada-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 20:54:29 by ricada-s          #+#    #+#             */
/*   Updated: 2022/11/14 20:02:23 by ricada-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	destlen;
	size_t	srclen;

	i = 0;
	if ((!dst) && (n == 0))
		return (0);
	destlen = ft_strlen(dst);
	srclen = ft_strlen(src);
	if (n <= destlen)
		return (srclen + n);
	while ((dst[i] != '\0') && i < (n - 1))
		i++;
	while (*src && i < (n - 1))
	{
		dst[i] = *src;
		i++;
		src++;
	}
	dst[i] = '\0';
	return (destlen + srclen);
}
/*
int main (void)
{
	char src[50] = "Ricardo";
	char dst[50] = "Familiar";

	ft_strlcat(src, dst, 12);
	printf("%s\n", src);
	printf("\n");
}
*/
