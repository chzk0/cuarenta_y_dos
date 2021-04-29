/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesteve- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 15:51:37 by cesteve-          #+#    #+#             */
/*   Updated: 2021/04/27 15:20:37 by cesteve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>
*/

char	*ft_strcat(char *dest, char *src)
{
	int	i;
	int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j])
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = 0;
	return (dest);
}

/*
int	main(void)
{
	char	str1[100] = "hola";
	char	str2[100] = " man";
	char	str3[100] = "hola";

	printf("str1 = %s\n", str1);
	printf("str2 = %s\n", str2);
	printf("str3 = %s\n", str3);
	printf("ft_strcat(str1, str2) = %s\n", ft_strcat(str1, str2));
	printf("strcat(str3, str2) = %s\n", strcat(str3, str2));
	return (0);
}
*/
