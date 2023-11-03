/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbumidan <pbumidan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 18:56:54 by pbumidan          #+#    #+#             */
/*   Updated: 2023/10/28 19:21:34 by pbumidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	if (c >= 97 && c <= 122)
		return (c - 32);
	else
		return (c);
}
/*
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	char	x = 103; 			// 'g' character
	char	y = 48; 			// '0' number
	char	z = 32; 			// ' ' space
	char	a = 42; 			// '*' symbol
	char	b = 00;				// (null) null
	unsigned char	c = 142; 	// 'Ä' extended ascii**

	printf("::ft_toupper::toupper::\n");
	printf("%c: %c - %c\n", x, ft_toupper(x), toupper(x));
	printf("%c: %c - %c\n", y, ft_toupper(y), toupper(y));
	printf("%c: %c - %c\n", z, ft_toupper(z), toupper(z));
	printf("%c: %c - %c\n", a, ft_toupper(a), toupper(a));
	printf("(null): %c - %c\n", ft_toupper(b), toupper(b));
	printf("Ä: %c - %c\n", ft_toupper(c), toupper(c));
}*/