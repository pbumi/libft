/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbumidan <pbumidan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 16:49:00 by pbumidan          #+#    #+#             */
/*   Updated: 2023/11/01 22:51:17 by pbumidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;

	i = 0;
	if (dstsize == 0)
		return (ft_strlen(src));
	while (src[i] && i + 1 < dstsize)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (ft_strlen(src));
}
/*
#include<stdio.h>
#include<string.h>

void	printresult(char *maindst, const char *src, size_t dstsize)
{
	char *dst1 = strdup(maindst);
	char *dst2 = strdup(maindst);
    size_t result_len1 = ft_strlcpy(dst1, src, dstsize);
	size_t result_len2 = strlcpy(dst2, src, dstsize);

    printf("ft_ string:%zu, %s\n", result_len1, dst1);
	printf("std string:%zu, %s\n", result_len2, dst2);

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
	printresult(md, "display 22,000,000,000", len); // src is more than dest
	
	char md2[0];
	size_t len2 = strlen(md2);
	printf("\ndest is 0\n");
	printresult(md2, "\0", len2);			// src is null
	printresult(md2, "display 10", len2); 	// src is more than dest

    return 0;
}*/