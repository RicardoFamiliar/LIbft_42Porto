/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricada-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/07 19:03:56 by ricada-s          #+#    #+#             */
/*   Updated: 2022/11/16 19:54:16 by ricada-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	len2;

	if ((!s1) && (len == 0))
		return (0);
	if (*s2 == '\0')
		return ((char *)s1);
	len2 = ft_strlen(s2);
	while (*s1 != '\0' && len-- >= len2)
	{
		if (*s1 == *s2 && ft_strncmp(s1, s2, len2) == 0)
			return ((char *)s1);
		s1++;
	}
	return (NULL);
}
/*
int main(void)
{

   const char s1[20] = "tudo ou nada";
   const char s2[10] = "do";
   char *len;

    len = ft_strnstr(s1, s2, 4);
    printf("Sub is: %s\n", len);
    return(0);
}*/
