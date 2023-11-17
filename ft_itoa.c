/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbumidan <pbumidan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 19:40:08 by pbumidan          #+#    #+#             */
/*   Updated: 2023/11/16 14:27:20 by pbumidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_mallocsize(long n)
{
	size_t	x;

	x = 0;
	if (n <= 0)
	{
		x++;
	}
	while (n != 0)
	{
		x++;
		n = n / 10;
	}
	return (x);
}

char	*ft_itoa(int n)
{
	char	*str;
	size_t	len;
	size_t	number;

	len = ft_mallocsize(n);
	str = (char *)malloc(sizeof(char) * len + 1);
	if (str == NULL)
		return (NULL);
	number = n;
	str[len] = '\0';
	len--;
	if (n < 0)
	{
		number = number * -1;
		str[0] = '-';
	}
	if (number == 0)
		str[len] = '0';
	while (number > 0)
	{
		str[len] = (number % 10) + '0';
		number = number / 10;
		len--;
	}
	return (str);
}
/*NOTES
::::Parameters ::::
-n: the integer to convert.

::::Return ::::
value The string representing the integer.
NULL if the allocation fails.

::::Description ::::
Allocates (with malloc(3)) and returns a string
representing the integer received as an argument.
Negative numbers must be handled.*/