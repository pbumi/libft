/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbumidan <pbumidan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 23:33:55 by pbumidan          #+#    #+#             */
/*   Updated: 2023/11/18 21:34:32 by pbumidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**freeres(char **res, size_t x)
{
	while (x > 0)
	{
		free(res[x - 1]);
		x--;
	}
	free(res);
	return (NULL);
}

static size_t	ft_mallocsize(const char *str, char c)
{
	size_t	count;
	size_t	i;

	i = 0;
	count = 0;
	while (str[i])
	{
		while (str[i] == c)
		{
			i++;
		}
		if (str[i] != c && str[i] != '\0')
		{
			count++;
		}
		while (str[i] != c && str[i] != '\0')
		{
			i++;
		}
	}
	return (count);
}

static char	**ft_splitter(char **res, const char *s, char c)
{
	size_t	i;
	size_t	start;
	size_t	res_i;

	i = 0;
	res_i = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		start = i;
		while (s[i] && s[i] != c)
			i++;
		if (i > start)
		{
			res[res_i] = ft_substr(s, start, i - start);
			{
				if (res[res_i] == NULL)
					return (freeres(res, res_i));
			}
			res_i++;
		}
	}
	res[res_i] = NULL;
	return (res);
}

char	**ft_split(char const *s, char c)
{
	char	**res;
	size_t	size;

	if (s == NULL)
	{
		return (NULL);
	}
	size = ft_mallocsize(s, c);
	res = (char **)malloc((sizeof(char *)) * (size + 1));
	if (res == NULL)
	{
		return (NULL);
	}
	res = ft_splitter(res, s, c);
	return (res);
}
/*NOTES
::::Parameters ::::
_s: The string to be split.
_c: The delimiter character.

::::Return value ::::
The array of new strings resulting from the split.
-NULL if the allocation fails.

::::Description ::::
Allocates (with malloc(3)) and returns an array
of strings obtained by splitting ’s’ using the
character ’c’ as a delimiter. The array must end
with a NULL pointer.*/