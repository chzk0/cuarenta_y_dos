/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesteve- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/22 19:29:39 by cesteve-          #+#    #+#             */
/*   Updated: 2021/04/24 09:21:51 by cesteve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	count;
	unsigned int	i;

	count = 0;
	while (src[count])
	{
		++count;
	}
	if (size != 0)
	{
		i = 0;
		while (src[i] && i < (size - 1))
		{
			dest[i] = src[i];
			++i;
		}
		dest[i] = '\0';
	}
	return (count);
}
