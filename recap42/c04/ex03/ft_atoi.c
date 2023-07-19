/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaaziz <abaaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 10:13:53 by abaaziz           #+#    #+#             */
/*   Updated: 2023/07/16 15:59:12 by abaaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	negatif;
	int	resultat;

	i = 0;
	negatif = 0;
	resultat = 0;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	while (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
		{
			negatif++;
		}
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		resultat = resultat * 10 + str[i] - 48;
		i++;
	}
	if (negatif % 2 == 1)
		resultat = resultat * (-1);
	return (resultat);
}
/*
#include <stdio.h>

int	main(int argc, char **argv)
{
	if (argc > 0)
	{
		printf("%d", ft_atoi(argv[1]));
	}
}
*/
