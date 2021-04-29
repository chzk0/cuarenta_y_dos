/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesteve- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 15:56:13 by cesteve-          #+#    #+#             */
/*   Updated: 2021/04/27 15:21:25 by cesteve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>
*/

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int				i;
	unsigned int	j;

	i = 0;
	while (dest[i])
		i++;
	j = 0;
	while (src[j] && j < nb)
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
	printf("ft_strncat(str1, str2, 2) = %s\n", ft_strncat(str1, str2, 2));
	printf("strncat(str3, str2, 2) = %s\n", strncat(str3, str2, 2));
	return (0);
}
*/
