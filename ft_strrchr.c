/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbumidan <pbumidan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 22:44:06 by pbumidan          #+#    #+#             */
/*   Updated: 2024/01/16 17:50:52 by pbumidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// char	*ft_strrchr(const char *s, int c)
// {
// 	size_t		len;
// 	char	*str;

// 	str = (char *)s;
// 	len = ft_strlen(s);
// 	if (c == '\0')
// 	{
// 		return (str + len);
// 	}
// 	while (len >= 0)
// 	{
// 		if (s[len] == (unsigned char)c)
// 		{
// 			return (str + len);
// 		}
// 		len--;
// 	}
// 	return (0);
// }

char	*ft_strrchr(const char *s, int c)
{
	size_t	len;

	len = ft_strlen(s);
	while (len && s[len] != (unsigned char)c)
		len--;
	if (len == 0 && (unsigned char)c != s[len])
		return (0);
	return ((char *)&s[len]);
}
