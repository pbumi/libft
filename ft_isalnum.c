/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbumidan <pbumidan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 16:33:33 by pbumidan          #+#    #+#             */
/*   Updated: 2023/11/01 15:56:59 by pbumidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((ft_isalpha(c) == 1) || (ft_isdigit(c) == 1))
	{
		return (1);
	}
	return (0);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char	x = 71; 				// 'G' character
	char	y = 48; 				// '0' number
	char	z = 32; 				// ' ' space
	char	a = 42; 				// '*' symbol
	char	b = 00;					// (null) null
	unsigned char		c = 255; 	// 'Ä' extended ascii**

	printf("::ft_isalnum::isalnum::\n");
	printf("%c: %d - %d\n", x, ft_isalnum(x), isalnum(x));
	printf("%c: %d - %d\n", y, ft_isalnum(y), isalnum(y));
	printf("%c: %d - %d\n", z, ft_isalnum(z), isalnum(z));
	printf("%c: %d - %d\n", a, ft_isalnum(a), isalnum(a));
	printf("(null): %d - %d\n", ft_isalnum(b), isalnum(b));
	printf("ÿ: %d - %d\n", ft_isalnum(c), isalnum(c));
}*/