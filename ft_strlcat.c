/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbumidan <pbumidan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:01:06 by pbumidan          #+#    #+#             */
/*   Updated: 2023/11/03 18:41:06 by pbumidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	di;
	size_t	si;
	size_t	dst_len;
	size_t	src_len;

	if (dstsize == 0)
		return (ft_strlen(src));
	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dstsize <= dst_len)
		return (dstsize + src_len);
	di = dst_len;
	si = 0;
	while (src[si] != '\0' && di + 1 < dstsize)
	{
		dst[di] = src[si];
		di++;
		si++;
	}
	dst[di] = '\0';
	return (dst_len + src_len);
}
/*
//main function

#include<stdio.h>
#include<string.h>

void	printresult(char *maindst, const char *src, size_t dstsize)
{
	char *dst1 = strdup(maindst);
	char *dst2 = strdup(maindst);
    size_t result_len1 = ft_strlcat(dst1, src, dstsize);
	size_t result_len2 = strlcat(dst2, src, dstsize);

    printf("ft_ string:%zu, %s\n", result_len1, dst1);
	printf("std string:%zu, %s\n", result_len2, dst2);

	free(dst1);
	free(dst2);
}

int main()
{
    char md[10] = "12345";
	printresult(md, "nine", 10);	//normal
	printresult(md, "\0", 10);	// src is null
	printresult(md, "display 15", 10); // src is more than dest
	
	char md2[0];
	printresult(md2, "four", 0);	//normal
	printresult(md2, "four", 5);	// l = src_len
	printresult(md2, "\0", 0);	// src is null
	printresult(md2, "display 10", 0); // src is more than dest

    return 0;
}
*/