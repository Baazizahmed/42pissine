/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaaziz <abaaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/11 16:04:47 by abaaziz           #+#    #+#             */
/*   Updated: 2023/07/13 22:05:21 by abaaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	int	i;

	i = 0;
	while (s1[i] && s1[i] == s2[i] && n > 0)
	{
		i++;
		n--;
	}
	if (n == 0)
		return (0);
	return (s1[i] - s2[i]);
}
/*
#include <string.h>
#include <stdio.h>

int   main(void)
{
        char str1[] = "Victor";
        char str2[] = "Victir";
        int result = ft_strncmp(str1,str2,5);
        printf("coparaison result: %d\n", result);
        return (0);
}
*/
