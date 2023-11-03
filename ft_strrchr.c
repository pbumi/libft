/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbumidan <pbumidan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/22 22:44:06 by pbumidan          #+#    #+#             */
/*   Updated: 2023/10/27 20:56:01 by pbumidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		len;
	char	*str;

	str = (char *)s;
	len = ft_strlen(s);
	if (c == '\0')
	{
		return (str + len);
	}
	while (len >= 0)
	{
		if (s[len] == c)
		{
			return (str + len);
		}
		len--;
	}
	return (0);
}
/*
#include<stdio.h>
#include<string.h>

int	main(void)
{
	const char	*s1 = "Haystaineedck Haysztack needle Haystack  !";
	char c = '\0';

	printf("\n%s", strrchr(s1, c));
	printf("\n%p", strrchr(s1, c));
	printf("\n%s", ft_strrchr(s1, c));
	printf("\n%p", ft_strrchr(s1, c));

	char x = 'q';
	printf("\n%s", strrchr(s1, x));
	printf("\n%p", strrchr(s1, x));
	printf("\n%s", ft_strrchr(s1, x));
	printf("\n%p", ft_strrchr(s1, x));

	return (0);
}*/