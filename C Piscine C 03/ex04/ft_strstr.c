/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesteve- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/25 16:34:43 by cesteve-          #+#    #+#             */
/*   Updated: 2021/04/29 11:11:00 by cesteve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
#include <stdio.h>
#include <string.h>
*/

char	*ft_strstr(char *str, char *to_find)
{
	int	ind1;
	int	ind2;
	int	y;

	ind1 = 0;
	ind2 = 0;
	y = 0;
	if (to_find[0] == '\0')
		return (str);
	while (str[ind1] != '\0')
	{
		if (to_find[ind2] == str[ind1])
		{
			y = ind1;
			while (to_find[ind2] != '\0' && str[ind1] == to_find[ind2])
			{
				ind1++;
				ind2++;
			}
			if (to_find[ind2] == '\0')
				return (&str[y]);
		}
		ind1++;
	}
	return (0);
}

/*
int	main(void)
{
	char	str1[100] = "hola xxx";
	char	str2[100] = "xxx";

	printf("str1 = %s\n", str1);
	printf("str2 = %s\n", str2);
	printf("ft_strstr(str1, str2) = %s\n", ft_strstr(str1, str2));
	printf("strstr(str1, str2) = %s\n", strstr(str1, str2));
	return (0);
}
*/
