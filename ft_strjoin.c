/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbumidan <pbumidan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 22:10:22 by pbumidan          #+#    #+#             */
/*   Updated: 2023/11/16 14:22:53 by pbumidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_cat(char const *s1, char const *s2, char *finalstr)
{
	size_t	a;
	size_t	b;

	a = 0;
	b = 0;
	while (s1[a])
	{
		finalstr[a] = s1[a];
		a++;
	}
	while (s2[b])
	{
		finalstr[a] = s2[b];
		a++;
		b++;
	}
	finalstr[a] = '\0';
	return (finalstr);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	s1len;
	size_t	s2len;
	char	*finalstr;

	if (s1 == NULL || s2 == NULL)
	{
		return (NULL);
	}
	s1len = ft_strlen(s1);
	s2len = ft_strlen(s2);
	finalstr = ((char *)malloc(sizeof(char) * (s1len + s2len + 1)));
	if (finalstr == NULL)
	{
		return (NULL);
	}
	ft_cat(s1, s2, finalstr);
	return (finalstr);
}
/*NOTES
::::Parameters::::
_s1: The prefix string.
_s2: The suffix string.

::::Return value The new string.::::
_NULL if the allocation fails.

::::Description::::
Allocates (with malloc(3)) and returns a new
string, which is the result of the concatenation
of ’s1’ and ’s2’.*/