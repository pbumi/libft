/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbumidan <pbumidan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:57:53 by pbumidan          #+#    #+#             */
/*   Updated: 2023/11/01 18:40:27 by pbumidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	x;
	char	*s_str;

	x = 0;
	s_str = (char *)s;
	while (x < n)
	{
		if ((unsigned char)s_str[x] == (unsigned char)c)
		{
			return ((char *)&s_str[x]);
		}
		x++;
	}
	return (NULL);
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(void)
{
	const char	*s1 = "ÃHayÿstick Haytackz1 Ä'Haystack z2 nele Haystack  z3! ";
	size_t len = strlen(s1);
	
	char c = '\0';
	printf("\n::null terminator::");
	printf("\ns :%s", memchr(s1, c, len));
	printf("\ns :%p", memchr(s1, c, len));
	printf("\nft:%s", ft_memchr(s1, c, len));
	printf("\nft:%p", ft_memchr(s1, c, len));

	char x = 'q';
	printf("\n\n::no needle::");
	printf("\ns :%s", memchr(s1, x, len));
	printf("\ns :%p", memchr(s1, x, len));
	printf("\nft:%s", ft_memchr(s1, x, len));
	printf("\nft:%p", ft_memchr(s1, x, len));

	char z = 'z';
	printf("\n\n::looks for char 'z'::");
	printf("\ns :%s", memchr(s1, z, len));
	printf("\ns :%p", memchr(s1, z, len));
	printf("\nft:%s", ft_memchr(s1, z, len));
	printf("\nft:%p", ft_memchr(s1, z, len));
	
	char	s2[] = {-49, 49, 1, -1, 0, -2, 2};
	printf("\n\n::looks for char '-1'::");
	printf("\ns :%s", memchr(s2, -1, 7));
	printf("\ns :%p", memchr(s2, -1, 7));
	printf("\nft:%s", ft_memchr(s2, -1, 7));
	printf("\nft:%p", ft_memchr(s2, -1, 7));
	return (0);

}
*/