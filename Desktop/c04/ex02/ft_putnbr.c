/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaaziz <abaaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 16:13:39 by abaaziz           #+#    #+#             */
/*   Updated: 2023/07/16 16:36:43 by abaaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
		write (1, "-2147483648", 11);
	else
	{
		if (nb >= 0 && nb < 10)
			ft_putchar(nb + 48);
		else if (nb < 0)
		{
			ft_putchar('-');
			ft_putnbr(nb *(-1));
		}
		else
		{
			ft_putnbr(nb / 10);
			ft_putchar(nb % 10 + 48);
		}
	}
}
/*
int	main(void)
{
	int number = 2147483647;
	ft_putnbr(number);
	return (0);
}
*/
