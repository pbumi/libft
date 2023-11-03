/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pbumidan <pbumidan@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/17 18:57:27 by pbumidan          #+#    #+#             */
/*   Updated: 2023/11/03 19:58:36 by pbumidan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	x;

	x = 0;
	while (x < n)
	{
		if (s1[x] != s2[x])
		{
			return ((unsigned char)s1[x] - (unsigned char)s2[x]);
		}
		else if (s1[x] == '\0' || s2[x] == '\0')
		{
			return (0);
		}
		x++;
	}
	return (0);
}
/*
#include<stdio.h>
#include<string.h>
void    test_print(char *s1, char *s2, int n)
{
    printf("Comparing '%s' and '%s' up to %d bytes:\n", s1, s2, n);
    printf("ft_strncmp: %d\n", ft_strncmp(s1, s2, n));
    printf("strncmp: %d\n\n", strncmp(s1, s2, n));
}
int     main(void)
{
    // Basic test cases
    test_print("abcde", "abcd", 3);         // Identical up to 3 chars
    test_print("abcde", "abcd", 4);         // Identical up to 4 chars
    test_print("abcde", "abcd", 5);         // Different at 5th char
    // Difference at beginning
    test_print("abcde", "bbcde", 1);   // Different at 1st char
    test_print("abcde", "bbcde", 5);  // Different at 1st char s
    // One string is a prefix of the other
    test_print("abc", "abcd", 3);           // Identical up to 3 chars
    test_print("abc", "abcd", 4);           // Different at 4th char
    test_print("abcd", "abc", 4);           // Different at 4th char
    // Special characters
    test_print("abc\0def", "abc\0dgh", 7);  // Include null term in middle
    test_print("abc\0def", "abc\0dgh", 4);  // Stop at null terminator
    // Totally different strings
    test_print("hello", "world", 5);                // Different right from start
    // Empty strings
    test_print("", "", 5);                  // Both empty
    test_print("abc", "", 3);               // One empty
    // Edge case?
    test_print("A", "ý", 1);
    return (0);
}*/
