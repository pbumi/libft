/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbumidan <pbumidan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:19:40 by pbumidan          #+#    #+#             */
/*   Updated: 2023/11/03 19:49:29 by pbumidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
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

	printf("::ft_isalpha::isalpha::\n");
	printf("%c: %d - %d\n", x, ft_isalpha(x), isalpha(x));
	printf("%c: %d - %d\n", y, ft_isalpha(y), isalpha(y));
	printf("%c: %d - %d\n", z, ft_isalpha(z), isalpha(z));
	printf("%c: %d - %d\n", a, ft_isalpha(a), isalpha(a));
	printf("(null): %d - %d\n", ft_isalpha(b), isalpha(b));
	printf("Ä: %d - %d\n", ft_isalpha(c), isalpha(c));

}*/