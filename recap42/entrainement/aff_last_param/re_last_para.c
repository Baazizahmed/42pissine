/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   re_last_para.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: abaaziz <abaaziz@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/19 21:50:06 by abaaziz           #+#    #+#             */
/*   Updated: 2023/07/19 22:18:53 by abaaziz          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	i;

	i = 0;
	if(argc <= 1)
	{
		write(1,"\n", 1);
		return (0);
	}
	while(argv[argc -1][i])
	{
		write(1, &argv [argc-1][i],1);
		i++;
	}
	write(1,"\n",1);
	return (0);
}
