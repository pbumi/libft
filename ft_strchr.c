/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbumidan <pbumidan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 22:44:06 by pbumidan          #+#    #+#             */
/*   Updated: 2023/11/14 02:22:07 by pbumidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	size_t	x;

	x = 0;
	while (s[x] != '\0')
	{
		if (s[x] == (unsigned char)c)
		{
			return ((char *)s + x);
		}
		x++;
	}
	if ((unsigned char)c == '\0')
	{
		return ((char *)s + x);
	}
	return (0);
}
