/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   union.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 16:00:25 by diarodri          #+#    #+#             */
/*   Updated: 2022/07/29 16:00:28 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	repeat2(char *str, char c)
{
	int i;
	
	i = 0;
	while (str[i] != '\0')
	{	
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}
int	repeat(char *str, char c, int p)
{
	int i;
	
	i = 0;
	while ( i < p)
	{	
		if (str[i] == c)
			return (0);
		i++;
	}
	return (1);
}

int 	main (int argc, char **argv)
{
	if (argc == 3)
	{
		int i;
		
		i = 0;
		while (argv[1][i] != '\0')
		{
			if (repeat(argv[1], argv[1][i], i) == 1)
				write(1, &argv[1][i], 1);
			i++;
		}
		i = 0;
		while (argv[2][i] != '\0')
		{
			if (repeat2(argv[1], argv[2][i]) == 1)
			{
				if(repeat(argv[2], argv[2][i], i) == 1)
					write(1, &argv[2][i], 1);
			}
			i++;
		}
	}
	write (1, "\n", 1);
}	 
