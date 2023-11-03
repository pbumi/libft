/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbumidan <pbumidan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 18:57:27 by pbumidan          #+#    #+#             */
/*   Updated: 2023/11/01 15:32:23 by pbumidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	x;
	size_t	y;

	if (needle[0] == '\0')
		return ((char *)haystack);
	if (len == 0)
		return (0);
	x = 0;
	while (haystack[x] != '\0' && x < len)
	{
		y = 0;
		while (haystack[x + y] == needle[y] && ((x + y) < len))
		{
			if (needle[y + 1] == '\0')
			{
				return ((char *)&haystack[x]);
			}
			y++;
		}
		x++;
	}
	return (0);
}
/*
#include <stdio.h>
#include <string.h>

void	printresult(const char *haystack, const char *needle, size_t len)
{
	char	*ptr = ft_strnstr(haystack, needle, len);;
	char	*ptr2 = strnstr(haystack, needle, len);;
	
    printf("%s\n", ptr);
	printf("%s\n", ptr2);
}

int	main(void)
{
	const	char *largestring = "lorem ipsum dolor sit amet";
    printresult(largestring, "ipsum", 20);

	const	char *small = "\0";
    printresult("lorem ipsum dolor sit amet", small, 20);
	
	printresult((void *)0, "fake", 0);
	
	return (0);
}*/