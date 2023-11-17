/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbumidan <pbumidan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/01 16:57:53 by pbumidan          #+#    #+#             */
/*   Updated: 2023/11/14 02:14:27 by pbumidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	x;
	char	*str;

	x = 0;
	str = (char *)s;
	while (x < n)
	{
		if ((unsigned char)str[x] == (unsigned char)c)
		{
			return ((char *)str + x);
		}
		x++;
	}
	return (NULL);
}
