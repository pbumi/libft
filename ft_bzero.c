/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbumidan <pbumidan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 20:02:28 by pbumidan          #+#    #+#             */
/*   Updated: 2023/11/01 00:54:56 by pbumidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	x;
	char	*c;

	x = 0;
	c = (char *)s;
	while (x < n)
	{
		c[x] = '\0';
		x++;
	}
}
/*
#include <string.h>
#include <stdio.h>

int	main(void)
{
	char *str1 = NULL;
	
	ft_bzero(str1, 15);
	strdup(str1);
	printf("%s, %lu", str1, strlen(str1));
	
}
*/
/*
void	ft_bzero(void *s, size_t n)
{
	ft_memset(s, 0, n);
}
*/