/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaaziz <abaaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 10:37:19 by abaaziz           #+#    #+#             */
/*   Updated: 2023/07/16 16:28:50 by abaaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		write(1, &str[len], 1);
		len++;
	}
}
/*
int main(void)
{
	ft_putstr("salut\n");
	ft_putstr("Bonjour");
	return (0);
}
*/
