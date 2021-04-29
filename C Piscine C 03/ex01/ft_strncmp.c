/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesteve- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/23 12:39:24 by cesteve-          #+#    #+#             */
/*   Updated: 2021/04/29 12:18:21 by cesteve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>
*/

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	while (*s1 != '0' && (*s1 == *s2) && n > 0)
	{
		s1++;
		s2++;
		n--;
	}
	if (n == 0)
		return (0);
	return (*(unsigned char *)s1 - *(unsigned char *) s2);
}

/*
int	main(void)
{
	char	str1[] = "hola";
	char	str2[] = "hola";
	char	str3[] = "1111";
	char	str4[] = "2222";

	printf("str1 = %s\n", str1);
	printf("str2 = %s\n", str2);
	printf("str3 = %s\n", str3);
	printf("str4 = %s\n", str4);
	printf("\n");
	printf("ft_strncmp(str1, str2, 4) = %d\n", ft_strncmp(str1, str2, 4));
	printf("strncmp(str1, str2, 4) = %d\n", strncmp(str1, str2, 4));
	printf("ft_strncmp(str3, str4, 3) = %d\n", ft_strncmp(str3, str4, 4));
	printf("strncmp(str3, str4, 3) = %d\n", strncmp(str3, str4, 4));
	printf("ft_strncmp(str4, str3, 3) = %d\n", ft_strncmp(str4, str3, 4));
	printf("strncmp(str4, str3, 3) = %d\n", strncmp(str4, str3, 4));
	return (0);
}
*/
