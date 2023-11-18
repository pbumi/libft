/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbumidan <pbumidan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/08 14:48:08 by pbumidan          #+#    #+#             */
/*   Updated: 2023/11/18 21:45:35 by pbumidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	unsigned int	x;

	if (s != NULL)
	{
		x = 0;
		while (s[x] != '\0')
		{
			f(x, s + x);
			x++;
		}
	}
}
/* NOTES
:::: Parameters ::::
s: The string on which to iterate.
f: The function to apply to each character.

:::: Return value ::::
None

::::Description ::::
Applies the function ’f’ on each character of
the string passed as argument, passing its index
as first argument. Each character is passed by
address to ’f’ to be modified if necessary.
*/