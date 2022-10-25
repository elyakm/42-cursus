/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: klaksi <klaksi@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/22 14:38:35 by klaksi            #+#    #+#             */
/*   Updated: 2022/10/24 21:41:57 by klaksi           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../include/libft.h"
#include <string.h>

// int main(void)
// {
// 	char *str = "Allo!";
// 	int i = 0;
// 	while(str[i])
// 		printf("ISALPHA: %d\n", ft_isalpha(str[i++]));
// }

// int main(void)
// {
// 	char test[] = "hiiiiiiiiie";
// 	printf("%zu\n", ft_strlen(test));
// }

// int main(void)
// {
// 	char *str = "Allo!";
// 	int i = 0;
// 	while(str[i])
// 		printf("%d\n", ft_isalnum(str[i++]));
// }

// int main(void)
// {
// 	char *str = "Allo!";
// 	int i = 0;
// 	while(str[i])
// 		printf("%d\n", ft_isascii(str[i++]));
// }

// int main(void)
// {
// 	char *str = "Allo!";
// 	int i = 0;
// 	while(str[i])
// 		printf("%d\n", ft_isprint(str[i++]));
// }

// int main(void)
// {
// 	char *str = "Allo!";
// 	int i = 0;
 
// 	while(str[i])
// 		printf("%c\n", ft_toupper(str[i++]));
// }

// int main(void)
// {
// 	char *str = "Allo!";
// 	int i = 0;
// 	while(str[i])
// 		printf("%c\n", ft_tolower(str[i++]));
// }

// int main(void)
// {
// 	char b[] = {"son pére"};
// 	int c = 'c';
// 	size_t len = 2;
// 	printf("%s", ft_memset(b, c, len));
// }

// int main(void)
// {
// 	char s[] = {"son pére"};
// 	size_t n = 2;
// 	ft_bzero(s, n);
// 	printf("%s\n", s);
// }

// int main(void)
// {
// 	char s[] = {"son pére"};
// 	char c = 'p';
// 	printf("%s\n", ft_strchr(s, c));
// }

// int main(void)
// {
// 	char s[] = {"son pére"};
// 	char c = 'r';
// 	printf("%s\n", ft_strrchr(s, c));
// }

// int main(void)
// {
// 	char src[] = "kaksynday";
// 	char dest[] = "monteur";
// 	printf("%s\n", dest);
// 	ft_strlcpy(dest, src, 10);
// 	printf("%s\n", dest);
// }

// int    main(void)
// {
//     char str1[100] = "Learningisfun";
//     char str2[100] = "Learningisfun";
//     char *first;
//     char *second;

//     first = str1;
//     second = str2;
//     printf("Original string : %s\n ",str1);
//     ft_memmove(first + 8, first, 10);
//     printf("my memmove overlap : %s\n ", str1);
//     memmove(second + 8, second, 10);
//     printf("real memmove overlap : %s\n ", str2);
// }

int	main(void)
{
	char	s1[] = "abz";
	char	s2[] = "abc";
	printf("%d\n", ft_strncmp(s1, s2, 8));
}
