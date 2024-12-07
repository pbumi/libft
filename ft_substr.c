/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbumidan <pbumidan@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:40:33 by pbumidan          #+#    #+#             */
/*   Updated: 2024/12/07 15:45:22 by pbumidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char			*substr;
	size_t			i;
	size_t			s_len;

	i = 0;
	s_len = ft_strlen(s);
	if (len == 0 || start > s_len || s_len == 0)
		return (ft_strdup(""));
	if ((s_len - start) < len)
		substr = malloc(sizeof(char) * (s_len - start + 1));
	else
		substr = malloc(sizeof(char) * (len + 1));
	if (!substr)
		return (0);
	while ((i < len && s[start + i]))
	{
		substr[i] = s[start + i];
		i++;
	}
	substr[i] = 0;
	return (substr);
}

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	char	*str;
// 	size_t	i;

// 	if (start >= ft_strlen(s))
// 		len = 0;
// 	if (len >= ft_strlen(s) - start)
// 		len = ft_strlen(s) - start;
// 	str = (char *) malloc(sizeof(char) * (len + 1));
// 	if (str == NULL)
// 		return (NULL);
// 	i = 0;
// 	while (i < len)
// 	{
// 		str[i] = s[start + i];
// 		i++;
// 	}
// 	str[i] = '\0';
// 	return (str);
// }

// char	*ft_substr(char const *s, unsigned int start, size_t len)
// {
// 	char	*substr;
// 	size_t	slen;
// 	size_t	i;

// 	if (s == NULL)
// 		return (NULL);
// 	slen = ft_strlen(s);
// 	if (start >= slen)
// 		len = 0;
// 	if (len > (slen - start))
// 		len = (slen - start);
// 	substr = (char *)malloc((sizeof(char)) * (len + 1));
// 	if (!substr)
// 		return (NULL);
// 	i = 0;
// 	while (i < len)
// 	{
// 		substr[i] = s[start];
// 		i++;
// 		start++;
// 	}
// 	substr[i] = '\0';
// 	return (substr);
// }
/*
NOTES
::::Parameters::::
_s: The string from which to create the substring.
_start: The start index of the substring in the string ’s’.
_len: The maximum length of the substring.

::::Return value The substring.::::
_NULL if the allocation fails.

::::Description::::
Allocates (with malloc(3)) and returns a substring
from the string ’s’.
The substring begins at index ’start’ and is of
maximum size ’len’.
*/
