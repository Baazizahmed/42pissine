/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaaziz <abaaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/13 18:15:38 by abaaziz           #+#    #+#             */
/*   Updated: 2023/07/16 16:34:47 by abaaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}
/*
#include <stdio.h>

int	main(void)
{
	char *str = "bonjour!";
	int longueur = ft_strlen(str);
	printf("Longueur de la chaine : %d\n", longueur );
	return 0;
}
*/
