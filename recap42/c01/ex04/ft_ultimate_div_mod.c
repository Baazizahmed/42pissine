/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaaziz <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 17:09:01 by abaaziz           #+#    #+#             */
/*   Updated: 2023/07/04 22:42:05 by abaaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*
#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;

	a = 27;
	b = 5;
	ft_ultimate_div_mod(&a, &b);

	printf("\ndiv = %d\nmod = %d", a, b);
}
*/
