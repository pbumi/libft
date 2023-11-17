/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbumidan <pbumidan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 18:57:27 by pbumidan          #+#    #+#             */
/*   Updated: 2023/11/14 02:30:30 by pbumidan         ###   ########.fr       */
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
