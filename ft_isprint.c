/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbumidan <pbumidan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:19:40 by pbumidan          #+#    #+#             */
/*   Updated: 2023/11/03 19:57:09 by pbumidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
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

	printf("::ft_isprint::isprint::\n");
	printf("%c: %d - %d\n", x, ft_isprint(x), isprint(x));
	printf("%c: %d - %d\n", y, ft_isprint(y), isprint(y));
	printf("%c: %d - %d\n", z, ft_isprint(z), isprint(z));
	printf("%c: %d - %d\n", a, ft_isprint(a), isprint(a));
	printf("(null): %d - %d\n", ft_isprint(b), isprint(b));
	printf("Ä: %d - %d\n", ft_isprint(c), isprint(c));
}*/