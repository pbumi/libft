/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbumidan <pbumidan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/04 22:10:41 by pbumidan          #+#    #+#             */
/*   Updated: 2023/11/15 20:23:10 by pbumidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_rmspace(char *str)
{
	size_t	x;

	x = 0;
	while (str[x] == 32 || (str[x] >= 9 && str[x] <= 13))
		x++;
	return (str + x);
}

int	ft_atoi(const char *str)
{
	size_t	x;
	size_t	nbr;
	int		neg;

	nbr = 0;
	neg = 1;
	x = 0;
	while (str[x] == 32 || (str[x] >= 9 && str[x] <= 13))
		x++;
	if (str[x] == '-' || str[x] == '+')
		if (str[x++] == '-')
			neg = -1;
	while (str[x] >= '0' && str[x] <= '9')
	{
		if ((nbr > ((SIZE_MAX / 10) + (str[x] - '0'))) && (neg == -1))
			return (0);
		if ((nbr > ((SIZE_MAX / 10) + (str[x] - '0'))) && (neg == 1))
			return (-1);
		nbr = (nbr * 10) + (str[x] - '0');
		x++;
	}
	return (nbr * neg);
}
