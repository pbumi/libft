#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <limits.h>
#include <ctype.h>
#include "libft.h"

/////////////// ATOI ///////////////

int	main(void)
{
	char *str = "   -2147483648";
	//char *str =  "18446744073709551618";
	//char *str = "-2147483648"; //INT_MIN
	//char *str =	"2147483647"; //INT_MAX
	char *str2 = strdup(str);

	printf("%d\n", ft_atoi(str));
	printf("%d\n", atoi(str2));
	return (0);
}
/////////////// BZERO ////////////////

// //int	main(void)
// {
// 	int x;
// 	char	*str = (void *)malloc(sizeof(char) * 10);
// 	memset(str, '*', 8);
// 	char *ft_str = strdup(str);

// 	bzero(str, 3);
// 	ft_bzero(ft_str, 3);

	
// 	printf("str::ft_str\n");
// 	x = 0;
// 	while (x != 10)
// 	{
// 		printf("%d: %c %c\n", x, str[x], ft_str[x]);
// 		x++;
// 	}
// 	free(str);
// 	free(ft_str);
// 	return (0);
// }
// /////////////// ISALNUM //////////////

// //int	main(void)
// {
// 	char	x = 71; 				// 'G' character
// 	char	y = 48; 				// '0' number
// 	char	z = 32; 				// ' ' space
// 	char	a = 42; 				// '*' symbol
// 	char	b = 00;					// (null) null
// 	unsigned char		c = 255; 	// 'Ä' extended ascii**

// 	printf("::ft_isalnum::isalnum::\n");
// 	printf("%c: %d - %d\n", x, ft_isalnum(x), isalnum(x));
// 	printf("%c: %d - %d\n", y, ft_isalnum(y), isalnum(y));
// 	printf("%c: %d - %d\n", z, ft_isalnum(z), isalnum(z));
// 	printf("%c: %d - %d\n", a, ft_isalnum(a), isalnum(a));
// 	printf("(null): %d - %d\n", ft_isalnum(b), isalnum(b));
// 	printf("ÿ: %d - %d\n", ft_isalnum(c), isalnum(c));
// }
// ////////////// ISALPHA //////////////

// //int	main(void)
// {
// 	char	x = 71; 			// 'G' character
// 	char	y = 48; 			// '0' number
// 	char	z = 32; 			// ' ' space
// 	char	a = 42; 			// '*' symbol
// 	char	b = 00;				// (null) null
// 	unsigned char	c = 142; 	// 'Ä' extended ascii**

// 	printf("::ft_isalpha::isalpha::\n");
// 	printf("%c: %d - %d\n", x, ft_isalpha(x), isalpha(x));
// 	printf("%c: %d - %d\n", y, ft_isalpha(y), isalpha(y));
// 	printf("%c: %d - %d\n", z, ft_isalpha(z), isalpha(z));
// 	printf("%c: %d - %d\n", a, ft_isalpha(a), isalpha(a));
// 	printf("(null): %d - %d\n", ft_isalpha(b), isalpha(b));
// 	printf("Ä: %d - %d\n", ft_isalpha(c), isalpha(c));

// }
// /////////////// ISASCII //////////////

// //int	main(void)
// {
// 	char	x = 71; 			// 'G' character
// 	char	y = 48; 			// '0' number
// 	char	z = 32; 			// ' ' space
// 	char	a = 42; 			// '*' symbol
// 	char	b = 00;				// (null) null
// 	unsigned char	c = 142; 	// 'Ä' extended ascii**

// 	printf("::ft_isascii::isascii::\n");
// 	printf("%c: %d - %d\n", x, ft_isascii(x), isascii(x));
// 	printf("%c: %d - %d\n", y, ft_isascii(y), isascii(y));
// 	printf("%c: %d - %d\n", z, ft_isascii(z), isascii(z));
// 	printf("%c: %d - %d\n", a, ft_isascii(a), isascii(a));
// 	printf("(null): %d - %d\n", ft_isascii(b), isascii(b));
// 	printf("Ä: %d - %d\n", ft_isascii(c), isascii(c));

// }
// /////////////// ISDIGIT //////////////

// //int	main(void)
// {
// 	char	x = 71; 			// 'G' character
// 	char	y = 48; 			// '0' number
// 	char	z = 32; 			// ' ' space
// 	char	a = 42; 			// '*' symbol
// 	char	b = 00;				// (null) null
// 	unsigned char	c = 142; 	// 'Ä' extended ascii**

// 	printf("::ft_isdigit::isdigit::\n");
// 	printf("%c: %d - %d\n", x, ft_isdigit(x), isdigit(x));
// 	printf("%c: %d - %d\n", y, ft_isdigit(y), isdigit(y));
// 	printf("%c: %d - %d\n", z, ft_isdigit(z), isdigit(z));
// 	printf("%c: %d - %d\n", a, ft_isdigit(a), isdigit(a));
// 	printf("(null): %d - %d\n", ft_isdigit(b), isdigit(b));
// 	printf("Ä: %d - %d\n", ft_isdigit(c), isdigit(c));
// }
// ////////////// ISPRINT /////////////

// //int	main(void)
// {
// 	char	x = 71; 			// 'G' character
// 	char	y = 48; 			// '0' number
// 	char	z = 32; 			// ' ' space
// 	char	a = 42; 			// '*' symbol
// 	char	b = 00;				// (null) null
// 	unsigned char	c = 142; 	// 'Ä' extended ascii**

// 	printf("::ft_isprint::isprint::\n");
// 	printf("%c: %d - %d\n", x, ft_isprint(x), isprint(x));
// 	printf("%c: %d - %d\n", y, ft_isprint(y), isprint(y));
// 	printf("%c: %d - %d\n", z, ft_isprint(z), isprint(z));
// 	printf("%c: %d - %d\n", a, ft_isprint(a), isprint(a));
// 	printf("(null): %d - %d\n", ft_isprint(b), isprint(b));
// 	printf("Ä: %d - %d\n", ft_isprint(c), isprint(c));
// }

// ////////////// ITOA //////////////

// //int main(void)
// {
// 	char *a = ft_itoa(0);
//  	printf("%s\n", a);
// 	printf("%s\n", ft_itoa(90023));
//  	printf("%s\n", ft_itoa(INT_MAX));
// 	printf("%s\n", ft_itoa(2147483647));
//  	printf("%s\n", ft_itoa(INT_MIN));
// 	printf("%s\n", ft_itoa(-2147483648));
// }
// /////////////// MEMCHR ///////////////

// int	main(void)
// {
// 	const char	*s1 = "ÃHayÿstick Haytackz1 Ä'Haystack z2 nele Haystack  z3! ";
// 	size_t len = strlen(s1);
	
// 	char c = '\0';
// 	printf("\n::null terminator::");
// 	printf("\ns :%s", memchr(s1, c, len));
// 	printf("\ns :%p", memchr(s1, c, len));
// 	printf("\nft:%s", ft_memchr(s1, c, len));
// 	printf("\nft:%p", ft_memchr(s1, c, len));

// 	char x = 'q';
// 	printf("\n\n::no needle::");
// 	printf("\ns :%s", memchr(s1, x, len));
// 	printf("\ns :%p", memchr(s1, x, len));
// 	printf("\nft:%s", ft_memchr(s1, x, len));
// 	printf("\nft:%p", ft_memchr(s1, x, len));

// 	char z = 'z';
// 	printf("\n\n::looks for char 'z'::");
// 	printf("\ns :%s", memchr(s1, z, len));
// 	printf("\ns :%p", memchr(s1, z, len));
// 	printf("\nft:%s", ft_memchr(s1, z, len));
// 	printf("\nft:%p", ft_memchr(s1, z, len));
	
// 	char	s2[] = {-49, 49, 1, -1, 0, -2, 2};
// 	printf("\n\n::looks for char '-1'::");
// 	printf("\ns :%s", memchr(s2, -1, 7));
// 	printf("\ns :%p", memchr(s2, -1, 7));
// 	printf("\nft:%s", ft_memchr(s2, -1, 7));
// 	printf("\nft:%p", ft_memchr(s2, -1, 7));
// 	return (0);

// }
// ////////////// MEMCMP ///////////////

// ////////////// MEMCPY //////////////

// int	main(void)
// {
// 	//char *des1 = "xxxxxx123";
// 	//char *sor1 = "abcdefg";
// 	char *des2;
// 	des2 = "xxxxxx123";
// 	char *sor2;
// 	sor2 = "abcdefg";
	
// 	//printf("%s\n", ft_memcpy(des1, sor1, 3));
// 	printf("%s\n", memcpy(des2, sor2, 3));
// 	return (0);
// }

// /////////////// MEMMOVE //////////////

// void	printresult(char *maindst, const char *src, size_t dstsize)
// {
// 	char *dst1 = strdup(maindst);
// 	char *dst2 = strdup(maindst);
  
//     printf("ft_ string:%s\n", ft_memmove(dst1, src, dstsize));
// 	printf("std string:%s\n", memmove(dst2, src, dstsize));

// 	free(dst1);
// 	free(dst2);
// }

// int main()
// {
// 	printresult("12345678910", "x", 10);
//     return 0;
// }
// /////////////// MEMSET ///////////////

// void	printresulta(void *b, int c, size_t len)
// {
// 	char *dst1 = strdup(b);
// 	char *dst2 = strdup(b);
   
//    	printf("%s\n", memset(dst1, c, len));
// 	printf("%s\n",ft_memset(dst2, c, len));

// 	free(dst1);
// 	free(dst2);
// }

// int main(void)
// {
//     char	test[10];
	
// 	printf("\nbasic test\n");
// 	printresulta(test, 'x', 10);
	
//     return 0;
// }
// /////////////// STRCHR ///////////////

// int	main(void)
// {
// 	const char	*s1 = "ÃHay\xFFÿstick Haytackz1 Ä'Haystack z2 nele Haystack  z3! ";
	
// 	char c = '\0';
// 	printf("\n::null terminator::");
// 	printf("\ns:%s", strchr(s1, c));
// 	printf("\ns:%p", strchr(s1, c));
// 	printf("\nft:%s", ft_strchr(s1, c));
// 	printf("\nft:%p", ft_strchr(s1, c));

// 	char x = 'q';
// 	printf("\n\n::no needle::");
// 	printf("\ns:%s", strchr(s1, x));
// 	printf("\ns:%p", strchr(s1, x));
// 	printf("\nft:%s", ft_strchr(s1, x));
// 	printf("\nft:%p", ft_strchr(s1, x));

// 	char z = 'z';
// 	printf("\n\n::looks for char 'z'::");
// 	printf("\ns:%s", strchr(s1, z));
// 	printf("\ns:%p", strchr(s1, z));
// 	printf("\nft:%s", ft_strchr(s1, z));
// 	printf("\nft:%p", ft_strchr(s1, z));

// 	char	s2[7] = {-42, 42, 196, -1, 0, -2, 2}; 
// 				// '\xD6' '*' '\x01' '\xFF' '\0' '\xFE' '\x02'
// 	char	n = '\xFF';
// 	printf("\n\n::looks for char '-1'::");
// 	printf("\nin:%p", s2 + 3);
// 	printf("\ns :%s", strchr(s2, n));
// 	printf("\ns :%p", strchr(s2, n));
// 	printf("\nft:%s", ft_strchr(s2, n));
// 	printf("\nft:%p", ft_strchr(s2, n));

// //IF MULTIBYTE CHAR
// 	char y =	'\xFF';     //0xFF;     //'\xC3\x84';//(char)0xc4; //'\u00C4';
// 	printf("\n\n::looks for '%d'::", 0xFF); //ÿ
// 	printf("\ns:%s", strchr(s1, y));
// 	printf("\ns:%p", strchr(s1, y));
// 	printf("\nft:%s", ft_strchr(s1, y));
// 	printf("\nft:%p", ft_strchr(s1, y));

// 	printf("\n\n::testing::"); 
// 	printf("\ns:%s", s1 + 0);
// 	printf("\ns:%p", s1 + 0);
// 	printf("\ns:%c", s1[0]);
// }
// /////////////// STRLCPY ///////////////

// void	printresultb(char *maindst, const char *src, size_t dstsize)
// {
// 	char *dst1 = strdup(maindst);
// 	char *dst2 = strdup(maindst);
//     size_t result_len1 = ft_strlcpy(dst1, src, dstsize);
// 	size_t result_len2 = strlcpy(dst2, src, dstsize);

//     printf("ft_ string:%zu, %s\n", result_len1, dst1);
// 	printf("std string:%zu, %s\n", result_len2, dst2);

// 	free(dst1);
// 	free(dst2);
// }

// int main()
// {
//     char md[] = "12345678910";
// 	size_t len = strlen(md);
// 	printf("\ndest is 10\n");
// 	printresultb(md, "1", len);						//src is less than dest
// 	printresultb(md, "\0", len);						// src is null
// 	printresultb(md, "display 22,000,000,000", len); // src is more than dest
	
// 	char md2[0];
// 	size_t len2 = strlen(md2);
// 	printf("\ndest is 0\n");
// 	printresultb(md2, "\0", len2);			// src is null
// 	printresultb(md2, "display 10", len2); 	// src is more than dest

//     return 0;
// }
// /////////////// STRNCMP ///////////////

// #include<stdio.h>
// #include<string.h>
// void    test_print(char *s1, char *s2, int n)
// {
//     printf("Comparing '%s' and '%s' up to %d bytes:\n", s1, s2, n);
//     printf("ft_strncmp: %d\n", ft_strncmp(s1, s2, n));
//     printf("strncmp: %d\n\n", strncmp(s1, s2, n));
// }
// int     main(void)
// {
//     // Basic test cases
//     test_print("abcde", "abcd", 3);         // Identical up to 3 chars
//     test_print("abcde", "abcd", 4);         // Identical up to 4 chars
//     test_print("abcde", "abcd", 5);         // Different at 5th char
//     // Difference at beginning
//     test_print("abcde", "bbcde", 1);   // Different at 1st char
//     test_print("abcde", "bbcde", 5);  // Different at 1st char s
//     // One string is a prefix of the other
//     test_print("abc", "abcd", 3);           // Identical up to 3 chars
//     test_print("abc", "abcd", 4);           // Different at 4th char
//     test_print("abcd", "abc", 4);           // Different at 4th char
//     // Special characters
//     test_print("abc\0def", "abc\0dgh", 7);  // Include null term in middle
//     test_print("abc\0def", "abc\0dgh", 4);  // Stop at null terminator
//     // Totally different strings
//     test_print("hello", "world", 5);                // Different right from start
//     // Empty strings
//     test_print("", "", 5);                  // Both empty
//     test_print("abc", "", 3);               // One empty
//     // Edge case?
//     test_print("A", "ý", 1);
//     return (0);
// }
// ////////////// STRNSTR ///////////////

// #include <stdio.h>
// #include <string.h>

// void	printresultx(const char *haystack, const char *needle, size_t len)
// {
// 	char	*ptr = ft_strnstr(haystack, needle, len);;
// 	char	*ptr2 = strnstr(haystack, needle, len);;
	
//     printf("%s\n", ptr);
// 	printf("%s\n", ptr2);
// }

// int	main(void)
// {
// 	const	char *largestring = "lorem ipsum dolor sit amet";
//     printresultx(largestring, "ipsum", 20);

// 	const	char *small = "\0";
//     printresultx("lorem ipsum dolor sit amet", small, 20);
	
// 	printresultx((void *)0, "fake", 0);
	
// 	return (0);
// }

// //////////////// STRRCHR ///////////////

// int	main(void)
// {
// 	const char	*s1 = "Haystaineedck Haysztack needle Haystack  !";
// 	char c = '\0';

// 	printf("\n%s", strrchr(s1, c));
// 	printf("\n%p", strrchr(s1, c));
// 	printf("\n%s", ft_strrchr(s1, c));
// 	printf("\n%p", ft_strrchr(s1, c));

// 	char x = 'q';
// 	printf("\n%s", strrchr(s1, x));
// 	printf("\n%p", strrchr(s1, x));
// 	printf("\n%s", ft_strrchr(s1, x));
// 	printf("\n%p", ft_strrchr(s1, x));

// 	return (0);
// }

// /////////////// SUBSTR ////////////////

// int main(void)
// {
// 	char	main[] = "xxxx5yyyy1zzzz2aaaa3";
// 	char	*sub;

// 	sub = ft_substr(main, 5, 0);
// 	printf("%s", sub);
// 	free(sub);
// 	return (0);
// }

// ///////////////// TOLOWER ///////////////

// int	main(void)
// {
// 	char	x = 71; 			// 'G' character
// 	char	y = 48; 			// '0' number
// 	char	z = 32; 			// ' ' space
// 	char	a = 42; 			// '*' symbol
// 	char	b = 00;				// (null) null
// 	unsigned char	c = 196; 	// 'Ä' extended ascii**

// 	printf("::ft_tolower::tolower::\n");
// 	printf("%c: %c - %c\n", x, ft_tolower(x), tolower(x));
// 	printf("%c: %c - %c\n", y, ft_tolower(y), tolower(y));
// 	printf("%c: %c - %c\n", z, ft_tolower(z), tolower(z));
// 	printf("%c: %c - %c\n", a, ft_tolower(a), tolower(a));
// 	printf("(null): %c - %c\n", ft_tolower(b), tolower(b));
// 	printf("Ä: %c - %c\n", ft_tolower(c), tolower(c));
// }

// /////////////// TOUPPER ///////////////

// int	main(void)
// {
// 	char	x = 103; 			// 'g' character
// 	char	y = 48; 			// '0' number
// 	char	z = 32; 			// ' ' space
// 	char	a = 42; 			// '*' symbol
// 	char	b = 00;				// (null) null
// 	unsigned char	c = 142; 	// 'Ä' extended ascii**

// 	printf("::ft_toupper::toupper::\n");
// 	printf("%c: %c - %c\n", x, ft_toupper(x), toupper(x));
// 	printf("%c: %c - %c\n", y, ft_toupper(y), toupper(y));
// 	printf("%c: %c - %c\n", z, ft_toupper(z), toupper(z));
// 	printf("%c: %c - %c\n", a, ft_toupper(a), toupper(a));
// 	printf("(null): %c - %c\n", ft_toupper(b), toupper(b));
// 	printf("Ä: %c - %c\n", ft_toupper(c), toupper(c));
// }

// /////////////// CALLOC ///////////////

// #include <string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	int x;
// 	char	*str = calloc(10, 1);
// 	char *ft_str = ft_calloc(10, 1);

// 	memset(str, '*', 4);
// 	memset(ft_str, '*', 4);

// 	printf("str::ft_str\n");
// 	x = 0;
// 	while (x != 10)
// 	{
// 		printf("%d: %c %c\n", x, str[x], ft_str[x]);
// 		x++;
// 	}
// 	free(str);
// 	free(ft_str);
// 	return (0);
// }

// /////////////// SPLIT //////////////

// #include <stdio.h>

// int	main(void)
// {
// 	size_t 	x;
// 	char	**res;
// 	char 	*string = "      split       this for   me  !       ";

// 	res = ft_split(string, ' ');
// 	x = 0;
// 	printf("%zu\n", ft_strlen(string));
// 	while (res[x] != '\0')
// 	{
// 		printf("%s\n", res[x]);
// 		x++;
// 	}
// }

// ///////////////// STRLCAT ///////////////

// void	printresultc(char *maindst, const char *src, size_t dstsize)
// {
// 	char *dst1 = strdup(maindst);
// 	char *dst2 = strdup(maindst);
//  //   size_t result_len1 = ft_strlcat(dst1, src, dstsize);
// 	size_t result_len2 = strlcat(dst2, src, dstsize);

//   //  printf("ft_ string:%zu, %s\n", result_len1, dst1);
// 	printf("std string:%zu, %s\n", result_len2, dst2);

// 	free(dst1);
// 	free(dst2);
// }

// int main()
// {
//     // char md[10] = "12345";
// 	// printresultc(md, "nine11", 12);	//normal
// 	// printresultc(md, "\0", 10);	// src is null
// 	// printresultc(md, "display 15", 10); // src is more than dest
	
// 	//char md2 = NULL;
// 	printresult(NULL, "four", 0);	//normal
// 	//printresultc(md2, "four", 5);	// l = src_len
// 	//printresultc(md2, "\0", 0);	// src is null
// 	//printresultc(md2, "display 10", 0); // src is more than dest

//     return 0;
// }
// ////////////////// LST_ADDFRONT ////////////////

// int	main(void)
// {
// 	char		*str1 = "this is node1";
// 	char		*str2 = "this is node2";
// 	char		*str3 = "this is node3";
// 	char		*str4 = "this is node4";

// 	t_list		*start = NULL;
// 	t_list		*node1 = ft_lstnew(str1);
// 	t_list		*node2 = ft_lstnew(str2);
// 	t_list		*node3 = ft_lstnew(str3);
// 	t_list		*node4 = ft_lstnew(str4);

// 	ft_lstadd_front(&start, node4);
// 	ft_lstadd_front(&start, node3);
// 	ft_lstadd_front(&start, node2);
// 	ft_lstadd_front(&start, node1);
// 	while (start)
// 	{
// 		printf("%p: %s\n", start, start->content);
// 		start = start->next;
// 	}
// }

// ////////////// LST_ITER ////////////////

// void	ft_change(void *start)
// {
// 	char	*content;

// 	content = (char *)start;
// 	{
// 		printf("%s\n", content);
// 	}
// }

// int	main(void)
// {
// 	char		*str1 = "this is node1\0";
// 	char		*str2 = "this is node2\0";
// 	char		*str3 = "this is node3\0";
// 	char		*str4 = "this is node4\0";

// 	t_list		*start = NULL;
// 	t_list		*node1 = ft_lstnew(str1);
// 	t_list		*node2 = ft_lstnew(str2);
// 	t_list		*node3 = ft_lstnew(str3);
// 	t_list		*node4 = ft_lstnew(str4);

// 	ft_lstadd_back(&start, node1);
// 	node1->next = node2;
// 	node2->next = node3;
// 	node3->next = node4;
// 	node4->next = NULL;

// 	ft_lstiter(start, &ft_change);
// }

// /////////////// LST_LAST ///////////////

// int	main(void)
// {
// 	char		*str1 = "this is node1";
// 	char		*str2 = "this is node2";
// 	char		*str3 = "this is node3";
// 	char		*str4 = "this is last4";

// 	t_list		*start = NULL;
// 	t_list		*node1 = ft_lstnew(str1);
// 	t_list		*node2 = ft_lstnew(str2);
// 	t_list		*node3 = ft_lstnew(str3);
// 	t_list		*node4 = ft_lstnew(str4);

// 	ft_lstadd_front(&start, node4);
// 	ft_lstadd_front(&start, node3);
// 	ft_lstadd_front(&start, node2);
// 	ft_lstadd_front(&start, node1);

// 	printf("%s\n", (ft_lstlast(start))->content);
// }

// /////////////// LST_NEW ///////////////

// int	main(void)
// {
// 	char	*str = "this is a new node";
// 	t_list	*newnode;

// 	newnode = ft_lstnew(str);
// 	printf("%p, %s", newnode->next, newnode->content);
// 	return (0);
// }
// /////////////// LST_SIZE //////////////

// int	main(void)
// {
// 	char		*str1 = "this is node1";
// 	char		*str2 = "this is node2";
// 	char		*str3 = "this is node3";
// 	char		*str4 = "this is node4";

// 	t_list		*start = NULL;
// 	t_list		*node1 = ft_lstnew(str1);
// 	t_list		*node2 = ft_lstnew(str2);
// 	t_list		*node3 = ft_lstnew(str3);
// 	t_list		*node4 = ft_lstnew(str4);

// 	ft_lstadd_front(&start, node4);
// 	ft_lstadd_front(&start, node3);
// 	ft_lstadd_front(&start, node2);
// 	ft_lstadd_front(&start, node1);

// 	printf("%d\n", ft_lstsize(start));

// }

/////// PUTNUMBER //////////

// int    main(void)
// {
//     ft_putnbr_fd(-2147483648);
//     write(1, "\n", 1);
//     ft_putnbr_fd(2147483647);
//     write(1, "\n", 1);
//     ft_putnbr_fd(-10);
//     return (0);
// }