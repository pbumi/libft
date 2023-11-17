/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbumidan <pbumidan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/26 19:19:03 by pbumidan          #+#    #+#             */
/*   Updated: 2023/11/14 02:17:56 by pbumidan         ###   ########.fr       */
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
