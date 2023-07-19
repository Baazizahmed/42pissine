/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaaziz <abaaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/04 10:10:51 by abaaziz           #+#    #+#             */
/*   Updated: 2023/07/14 14:39:38 by abaaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	c;

	c = *a;
	*a = *b;
	*b = c;
}
/*
#include <stdio.h>
int	main(void)
{
	int a = 50;
	int b = 20;
	 printf ("avant le swap : a = %d, b = %d\n", a, b);
	 ft_swap(&a, &b);
	 printf ("apres le swap :a = %d, b = %d\n" ,a, b);
	return 0;
}
*/
