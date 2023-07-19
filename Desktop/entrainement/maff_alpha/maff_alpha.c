/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   maff_alpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaaziz <abaaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 14:07:57 by abaaziz           #+#    #+#             */
/*   Updated: 2023/07/19 14:18:27 by abaaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	(void)argv;
	if(argc > 0)
	{
		write (1, "aBcDeFgHiJkLmNoPqRsTuVwXyZ\n", 27);
	}
	return (0);
}
