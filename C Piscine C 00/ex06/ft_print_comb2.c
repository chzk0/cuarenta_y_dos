/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesteve- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/15 12:22:21 by cesteve-          #+#    #+#             */
/*   Updated: 2021/04/15 12:22:59 by cesteve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putchar_multiple(char i)
{
	int	p;

	p = (i / 10) + 48;
	ft_putchar(p);
	p = (i % 10) + 48;
	ft_putchar(p);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	b = 1;
	while (a <= 99)
	{
		b = a + 1;
		while (b <= 99)
		{
			ft_putchar_multiple(a);
			ft_putchar(' ');
			ft_putchar_multiple(b);
			if (a < 98)
			{
				ft_putchar(',');
				ft_putchar(' ');
			}
			b++;
		}
		a++;
	}
}
