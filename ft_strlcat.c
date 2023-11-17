/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbumidan <pbumidan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/29 17:01:06 by pbumidan          #+#    #+#             */
/*   Updated: 2023/11/14 16:37:50 by pbumidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	di;
	size_t	si;
	size_t	dst_len;
	size_t	src_len;

	src_len = ft_strlen(src);
	if (dst == NULL && dstsize == 0)
	{
		return (src_len);
	}
	dst_len = ft_strlen(dst);
	if ((dst != NULL) && (dstsize <= dst_len))
	{
		return (dstsize + src_len);
	}
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

/* NOTES
Return values should be dstlen + srclen +1 

If dstsize is 0, the function returns the length of src 
because no characters can be appended.

If dstsize is less than or equal to dst_len, 
the function returns dstsize + src_len 
because no characters can be appended beyond the size of the destination buffer.

Before :                || After :
dst   | src   | size    || dst      | return
------------------------||--------------------
abc\0 | xyz\0 | 0       || abc\0    | 3
abc\0 | xyz\0 | 1       || abc\0    | 4
abc\0 | xyz\0 | 2       || abc\0    | 5
abc\0 | xyz\0 | 3       || abc\0    | 6
abc\0 | xyz\0 | 4       || abc\0    | 6
abc\0 | xyz\0 | 5       || abcs\0   | 6
abc\0 | xyz\0 | 6       || abcxy\0  | 6
abc\0 | xyz\0 | 7       || abcxyz\0 | 6
abc\0 | xyz\0 | 8       || dstxyz\0 | 6

strlcat() appends string src to the end of dst. 
It will append at most dstsize – strlen(dst) – 1 characters. 
It will then NUL-terminate, unless dstsize is 0 
or the original dst string was longer than dstsize 
(in practice this should not happen 
as it means that either dstsize is incorrect 
or that dst is not a proper string).
*/