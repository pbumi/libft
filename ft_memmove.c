/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbumidan <pbumidan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 21:21:43 by pbumidan          #+#    #+#             */
/*   Updated: 2023/11/03 21:16:48 by pbumidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char	*ds;
	char	*sr;
	size_t	x;

	ds = (char *) dst;
	sr = (char *) src;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (ds < sr)
		return (ft_memcpy(ds, sr, len));
	x = 0;
	while (len > 0)
	{
		ds[len] = sr[len];
		len--;
	}
	return (ds);
}*/
void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	x;

	x = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	if (src < dst)
	{
		while (len > 0)
		{
			len--;
			((unsigned char *)dst)[len] = ((unsigned char *)src)[len];
		}
	}
	else
	{
		x = 0;
		while (x < len)
		{
			((unsigned char *)dst)[x] = ((unsigned char *)src)[x];
			x++;
		}
	}
	return (dst);
}

#include<stdio.h>
#include<string.h>

void	printresult(char *maindst, const char *src, size_t dstsize)
{
	char *dst1 = strdup(maindst);
	char *dst2 = strdup(maindst);
  
    printf("ft_ string:%s\n", ft_memmove(dst1, src, dstsize));
	printf("std string:%s\n", memmove(dst2, src, dstsize));

	free(dst1);
	free(dst2);
}

int main()
{
    char md[] = "12345678910";
	size_t len = strlen(md);
	printf("\ndest is 10\n");
	printresult(md, "1", len);						//src is less than dest
	printresult(md, "\0", len);						// src is null
	printresult(md, "iwantyoutocopythis", 30); // src is more than dest
	
	char md2[0];
	size_t len2 = strlen(md2);
	printf("\ndest is 0\n");
	printresult(md2, "\0", len2);			// src is null
	printresult(md2, "display 10", 30); 	// src is more than dest

    return 0;
}