/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbumidan <pbumidan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 15:57:30 by pbumidan          #+#    #+#             */
/*   Updated: 2023/10/28 19:18:46 by pbumidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isdigit(int c)
{
	if ((c >= 48 && c <= 57))
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
	char	x = 71; 			// 'G' character
	char	y = 48; 			// '0' number
	char	z = 32; 			// ' ' space
	char	a = 42; 			// '*' symbol
	char	b = 00;				// (null) null
	unsigned char	c = 142; 	// 'Ä' extended ascii**

	printf("::ft_isdigit::isdigit::\n");
	printf("%c: %d - %d\n", x, ft_isdigit(x), isdigit(x));
	printf("%c: %d - %d\n", y, ft_isdigit(y), isdigit(y));
	printf("%c: %d - %d\n", z, ft_isdigit(z), isdigit(z));
	printf("%c: %d - %d\n", a, ft_isdigit(a), isdigit(a));
	printf("(null): %d - %d\n", ft_isdigit(b), isdigit(b));
	printf("Ä: %d - %d\n", ft_isdigit(c), isdigit(c));
}*/