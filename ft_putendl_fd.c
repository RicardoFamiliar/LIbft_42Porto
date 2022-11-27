/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ricada-s <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/09 19:49:21 by ricada-s          #+#    #+#             */
/*   Updated: 2022/11/19 18:20:26 by ricada-s         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}
/*
int		main()
{
	ft_putendl_fd("Teste Here", 1);
	return(0);
	//cc ft_putendl_fd.c ft_putchar_fd.c ft_putstr_fd.c ft_strlen.c
}*/
