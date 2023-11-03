/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbumidan <pbumidan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/25 12:19:40 by pbumidan          #+#    #+#             */
/*   Updated: 2023/11/03 19:49:19 by pbumidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
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

	printf("::ft_isascii::isascii::\n");
	printf("%c: %d - %d\n", x, ft_isascii(x), isascii(x));
	printf("%c: %d - %d\n", y, ft_isascii(y), isascii(y));
	printf("%c: %d - %d\n", z, ft_isascii(z), isascii(z));
	printf("%c: %d - %d\n", a, ft_isascii(a), isascii(a));
	printf("(null): %d - %d\n", ft_isascii(b), isascii(b));
	printf("Ä: %d - %d\n", ft_isascii(c), isascii(c));

}*/
/* NOTES
char is treated as signed -128 to 127
unsigned char is 0 to 255 some extended ascii charcters are >127
*/