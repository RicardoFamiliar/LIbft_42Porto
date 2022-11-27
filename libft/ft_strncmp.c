/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricada-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 20:21:08 by ricada-s          #+#    #+#             */
/*   Updated: 2022/11/16 19:41:27 by ricada-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	index;

	index = 0;
	if (n == 0)
		return (0);
	while (s1[index] != '\0' && s2[index] != '\0'
		&& index < (n -1) && s1[index] == s2[index])
	{
		index++;
	}
	if (s1[index] == s2[index])
	{
		return (0);
	}
	else
	{
		return ((unsigned char)s1[index] - (unsigned char)s2[index]);
	}
}
/*
#include <stdio.h>
#include <string.h>

int		main(void)
{
	printf("ft_strncmp : %d\n", ft_strncmp("testA", "test", 5));
	printf("strncmp : %d\n", strncmp("testa", "test", 5));
}*/
