/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbumidan <pbumidan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 18:57:27 by pbumidan          #+#    #+#             */
/*   Updated: 2023/10/29 16:54:47 by pbumidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_tolower(int c)
{
	if (c >= 65 && c <= 90)
		return (c + 32);
	else
		return (c);
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
	unsigned char	c = 196; 	// 'Ä' extended ascii**

	printf("::ft_tolower::tolower::\n");
	printf("%c: %c - %c\n", x, ft_tolower(x), tolower(x));
	printf("%c: %c - %c\n", y, ft_tolower(y), tolower(y));
	printf("%c: %c - %c\n", z, ft_tolower(z), tolower(z));
	printf("%c: %c - %c\n", a, ft_tolower(a), tolower(a));
	printf("(null): %c - %c\n", ft_tolower(b), tolower(b));
	printf("Ä: %c - %c\n", ft_tolower(c), tolower(c));
}*/
