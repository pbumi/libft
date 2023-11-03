/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbumidan <pbumidan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:19:03 by pbumidan          #+#    #+#             */
/*   Updated: 2023/11/03 20:57:37 by pbumidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t			x;
	unsigned char	*b_str;

	x = 0;
	b_str = (unsigned char *)b;
	while (x < len)
	{
		b_str[x] = (unsigned char)c;
		x++;
	}
	return (b_str);
}
/*
#include<stdio.h>
#include<string.h>

void	printresult(void *b, int c, size_t len)
{
	char *dst1 = strdup(b);
	char *dst2 = strdup(b);
   
   	printf("%s\n", memset(dst1, c, len));
	printf("%s\n",ft_memset(dst2, c, len));

	free(dst1);
	free(dst2);
}

int main(void)
{
    char	test[10];
	
	printf("\nbasic test\n");
	printresult(test, 'x', 10);
	
    return 0;
}
*/
/*
// version 2
void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*b_str;

	b_str = (unsigned char *)b;
	while (len > 0)
	{
		b_str[len -1] = (unsigned char)c;
		len--;
	}
	return (b_str);
}*/
