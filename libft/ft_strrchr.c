/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricada-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 18:43:40 by ricada-s          #+#    #+#             */
/*   Updated: 2022/11/16 19:22:55 by ricada-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	int		s_len;

	s_len = ft_strlen(s);
	p = (char *)s + s_len - 1;
	if (c == '\0')
	{
		p++;
		return (p);
	}
	while (s_len != 0)
	{
		if (*p == c)
		{
			return (p);
		}
		s_len--;
		p--;
	}
	return (NULL);
}
/*
	int main(void)
	{
		char *s;
		s = ft_strrchr("yellow", 'o');
		printf("%s\n", s);
		printf("\n");
		char *p4;
		p4 = strrchr("yellow", 'l');
		printf("%s\n", p4);
	}
*/
