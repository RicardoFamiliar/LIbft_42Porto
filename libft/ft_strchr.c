/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricada-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/06 21:58:43 by ricada-s          #+#    #+#             */
/*   Updated: 2022/11/19 18:27:55 by ricada-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*pointer;

	pointer = (char *)s;
	while (*pointer)
	{
		if (*pointer == c)
		{
			return (pointer);
		}
		pointer++;
	}
	if (*pointer == '\0' && c == '\0')
	{
		return (pointer);
	}
	return (NULL);
}
/*
int		main()
{
	char a[] = "Testing ground?";
	char b = 'i';

	char c[] = "Testing ground";
	char d = 'i';

	printf("%s\n", strchr(a, b));

	printf("\n%s\n", ft_strchr(c, d));

	return (0);
}*/
