/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesteve- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/26 15:36:22 by cesteve-          #+#    #+#             */
/*   Updated: 2021/04/27 17:41:23 by cesteve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>
*/

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	src_i;
	unsigned int	dest_i;

	i = 0;
	src_i = 0;
	dest_i = 0;
	while (src[src_i])
		src_i++;
	if (size == 0)
		return (src_i);
	while (dest[dest_i])
		dest_i++;
	if (size <= dest_i)
		return (size + src_i);
	while (size && (size - 1) - dest_i && src[i])
	{
		dest[dest_i + i] = src[i];
		i++;
		size--;
	}
	dest[dest_i + i] = 0;
	return (src_i + dest_i);
}

/*
int	main(void)
{

	char	str1[100] = "h";
	char	str2[100] = "o";
	char	str3[100] = "l";
	char	str4[100] = "a xxxxxxxxxx";
	char	str5[100] = "h";
	char	str6[100] = "o";
	char	str7[100] = "l";
	char	str8[100] = "a xxxxxxxxxx";

	printf("str1 = %s\n", str1);
	printf("str2 = %s\n", str2);
	printf("str3 = %s\n", str3);
	printf("str4 = %s\n", str4);
	printf("ft_strlcat(str1, str2, 3) = %u\n", ft_strlcat(str1, str2, 3));
	printf("str1 = %s\n", str1);
	printf("ft_strlcat(str1, str3, 4) = %u\n", ft_strlcat(str1, str3, 4));
	printf("str1 = %s\n", str1);
	printf("ft_strlcat(str1, str4, 9) = %u\n", ft_strlcat(str1, str4, 9));
	printf("str1 = %s\n", str1);
	printf("str5 = %s\n", str5);
	printf("str6 = %s\n", str6);
	printf("str7 = %s\n", str7);
	printf("str8 = %s\n", str8);
	printf("strlcat(str5, str6, 3) = %lu\n", strlcat(str5, str6, 3));
	printf("str5 = %s\n", str5);
	printf("strlcat(str5, str7, 4) = %lu\n", strlcat(str5, str7, 4));
	printf("str5 = %s\n", str5);
	printf("strlcat(str5, str8, 9) = %lu\n", strlcat(str5, str8, 9));
	printf("str5 = %s\n", str5);
	return (0);
}
*/
