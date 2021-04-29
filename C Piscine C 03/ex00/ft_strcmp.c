/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesteve- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 10:22:40 by cesteve-          #+#    #+#             */
/*   Updated: 2021/04/28 15:21:32 by cesteve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>
*/

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}

/*
int	main(void)
{
	char	str1[] = "xxxx";
	char	str2[] = "xxxx";
	char	str3[] = "xxxxx";
	char	str4[] = "xxxv";
	char	str5[] = "xxxxv";

	printf("str1 = %s\n", str1);
	printf("str2 = %s\n", str2);
	printf("\n");
	printf("ft_strcmp(str1, str2) = %d\n", ft_strcmp(str1, str2));
	printf("strcmp(str1, str2) = %d\n", strcmp(str1, str2));
	printf("str3 = %s\n", str3);
	printf("ft_strcmp(str1, str3) = %d\n", ft_strcmp(str1, str3));
	printf("strcmp(str1, str3) = %d\n", strcmp(str1, str3));
	printf("str4 = %s\n", str4);
	printf("ft_strcmp(str1, str4) = %d\n", ft_strcmp(str1, str4));
	printf("strcmp(str1, str4) = %d\n", strcmp(str1, str4));
	printf("str5 = %s\n", str5);
	printf("ft_strcmp(str1, str5) = %d\n", ft_strcmp(str1, str5));
	printf("strcmp(str1, str5) = %d\n", strcmp(str1, str5));
	return (0);
}
*/
