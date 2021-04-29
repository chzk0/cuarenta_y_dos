/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cesteve- <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/28 10:15:56 by cesteve-          #+#    #+#             */
/*   Updated: 2021/04/28 10:24:09 by cesteve-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	long int	n;

	n = nb;
	if (n < 0)
	{
		ft_putchar('-');
		n *= -1;
	}
	if (n >= 10)
	{
		ft_putnbr(n / 10);
		ft_putnbr(n % 10);
	}
	else
	{
		ft_putchar(n + 48);
	}
}

/*
int	main(void)
{
	int	nbr1;
	int	nbr2;
	int	nbr3;

	nbr1 = -2147483648;
	nbr2 = 0;
	nbr3 = 2147483647;
	ft_putnbr(nbr1);
	ft_putchar('\n');
	ft_putnbr(nbr2);
	ft_putchar('\n');
	ft_putnbr(nbr3);
	ft_putchar('\n');
	return (0);
}
*/
