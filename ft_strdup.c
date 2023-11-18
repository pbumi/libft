/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbumidan <pbumidan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:23:16 by pbumidan          #+#    #+#             */
/*   Updated: 2023/11/18 21:35:20 by pbumidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_cpy(char *dest, const char *src)
{
	size_t	x;

	x = 0;
	while (src [x])
	{
		dest[x] = src[x];
		x++;
	}
	dest [x] = '\0';
	return (dest);
}

char	*ft_strdup(const char *s1)
{
	size_t		len;
	char		*duplicate;

	len = ft_strlen(s1);
	duplicate = (char *)malloc(len + 1);
	if (duplicate == NULL)
	{
		return (0);
	}
	else if (duplicate != NULL)
	{
		{
			ft_cpy(duplicate, s1);
		}
		return (duplicate);
	}
	else
		return (0);
}
