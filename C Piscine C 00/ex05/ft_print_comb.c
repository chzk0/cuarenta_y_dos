/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesteve- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 13:51:04 by cesteve-          #+#    #+#             */
/*   Updated: 2021/04/15 11:36:11 by cesteve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchar_multiple(char char1, char char2, char char3)
{
	ft_putchar(char1 + 48);
	ft_putchar(char2 + 48);
	ft_putchar(char3 + 48);
	if (char1 != 7 || char2 != 8 || char3 != 9)
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb(void)
{
	int	int1;
	int	int2;
	int	int3;

	int1 = 0;
	while (int1 <= 7)
	{
		int2 = int1 + 1;
		while (int2 <= 8)
		{
			int3 = int2 + 1;
			while (int3 <= 9)
			{
				ft_putchar_multiple(int1, int2, int3);
				int3++;
			}
			int2++;
		}
		int1++;
	}
}
