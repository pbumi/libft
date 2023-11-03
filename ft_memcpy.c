/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbumidan <pbumidan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 00:59:46 by pbumidan          #+#    #+#             */
/*   Updated: 2023/10/30 18:23:07 by pbumidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void	*dst, const void *src, size_t n)
{
	size_t	x;
	char	*d;
	char	*s;

	if (src == '\0' && dst == '\0')
	{
		return (NULL);
	}
	d = (char *)dst;
	s = (char *)src;
	x = 0;
	while (x < n)
	{
		d[x] = s[x];
		x++;
	}
	return (dst);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	//char *des1 = "xxxxxx123";
	//char *sor1 = "abcdefg";
	char *des2;
	des2 = "xxxxxx123";
	char *sor2;
	sor2 = "abcdefg";
	
	//printf("%s\n", ft_memcpy(des1, sor1, 3));
	printf("%s\n", memcpy(des2, sor2, 3));
	return (0);
}*/