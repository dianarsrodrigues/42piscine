/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/28 11:18:47 by diarodri          #+#    #+#             */
/*   Updated: 2022/07/28 11:18:51 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

int	main(int argc, char *argv[])
{
	if (argc == 2)
	{
		int	res;
		int	i;
		int	s;
		
		res = 0;
		i = 0;
		s = 1;
		while ((argv[1][i] >= '\t' && argv[1][i] <= '\r') || argv[1][i] == ' ')
			i++;
		while (argv[1][i] == '+' || argv[1][i] == '-')
		{
			if (argv[1][i] == '-')
				s *= -1;
			i++;
		}
		while (argv[1][i] >= '0' && argv[1][i] <= '9')
		{
			res = res * 10 + argv[1][i] - '0';
			i++;
		}
		printf("%d", res * s);
	}
	else
		write ( 1, "\n", 1);
	return (0);
}
