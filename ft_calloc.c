/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbumidan <pbumidan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 23:22:27 by pbumidan          #+#    #+#             */
/*   Updated: 2023/11/16 14:09:07 by pbumidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*str;

	if (size && count > SIZE_MAX / size)
		return (NULL);
	if (count && size > SIZE_MAX / count)
		return (NULL);
	str = (void *)malloc(count * size);
	if (str == NULL)
		return (NULL);
	else if (str != NULL)
	{
		ft_bzero(str, count * size);
		return (str);
	}
}
