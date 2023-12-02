/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbumidan <pbumidan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:23:16 by pbumidan          #+#    #+#             */
/*   Updated: 2023/12/02 21:04:26 by pbumidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t		len;
	size_t		x;
	char		*duplicate;

	x = 0;
	len = ft_strlen(s1);
	duplicate = (char *)malloc(len + 1);
	if (!duplicate)
		return (NULL);
	while (s1[x])
	{
		duplicate[x] = s1[x];
		x++;
	}
	duplicate[x] = '\0';
	return (duplicate);
}
