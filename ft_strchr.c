/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbumidan <pbumidan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 22:44:06 by pbumidan          #+#    #+#             */
/*   Updated: 2023/11/01 21:23:51 by pbumidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
char	*ft_strchr(const char *s, int c)
{
	size_t	x;

	x = 0;
	while (s[x] != '\0')
	{
		if (s[x] == c)
		{
			return ((char *)&s[x]);
		}
		x++;
	}
	if (c == '\0')
	{
		return ((char *)s + x);
	}
	return (0);
}*/

char	*ft_strchr(const char *s, int c)
{
	size_t	len;
	char	*ptr;

	len = ft_strlen(s);
	ptr = ft_memchr(s, c, len + 1);
	{
		return (ptr);
	}
}
/*
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int	main(void)
{
	const char	*s1 = "ÃHay\xFFÿstick Haytackz1 Ä'Haystack z2 nele Haystack  z3! ";
	
	char c = '\0';
	printf("\n::null terminator::");
	printf("\ns:%s", strchr(s1, c));
	printf("\ns:%p", strchr(s1, c));
	printf("\nft:%s", ft_strchr(s1, c));
	printf("\nft:%p", ft_strchr(s1, c));

	char x = 'q';
	printf("\n\n::no needle::");
	printf("\ns:%s", strchr(s1, x));
	printf("\ns:%p", strchr(s1, x));
	printf("\nft:%s", ft_strchr(s1, x));
	printf("\nft:%p", ft_strchr(s1, x));

	char z = 'z';
	printf("\n\n::looks for char 'z'::");
	printf("\ns:%s", strchr(s1, z));
	printf("\ns:%p", strchr(s1, z));
	printf("\nft:%s", ft_strchr(s1, z));
	printf("\nft:%p", ft_strchr(s1, z));

	char	s2[7] = {-42, 42, 196, -1, 0, -2, 2}; 
				// '\xD6' '*' '\x01' '\xFF' '\0' '\xFE' '\x02'
	char	n = '\xFF';
	printf("\n\n::looks for char '-1'::");
	printf("\nin:%p", s2 + 3);
	printf("\ns :%s", strchr(s2, n));
	printf("\ns :%p", strchr(s2, n));
	printf("\nft:%s", ft_strchr(s2, n));
	printf("\nft:%p", ft_strchr(s2, n));

//IF MULTIBYTE CHAR
	char y =	'\xFF';     //0xFF;     //'\xC3\x84';//(char)0xc4; //'\u00C4';
	printf("\n\n::looks for '%d'::", 0xFF); //ÿ
	printf("\ns:%s", strchr(s1, y));
	printf("\ns:%p", strchr(s1, y));
	printf("\nft:%s", ft_strchr(s1, y));
	printf("\nft:%p", ft_strchr(s1, y));

	printf("\n\n::testing::"); 
	printf("\ns:%s", s1 + 0);
	printf("\ns:%p", s1 + 0);
	printf("\ns:%c", s1[0]);
}*/