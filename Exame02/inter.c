/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   inter.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 15:15:42 by diarodri          #+#    #+#             */
/*   Updated: 2022/07/29 15:15:45 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

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
		int j;
		
		i = 0;
		while (argv[1][i] != '\0')
		{
			j = 0;
			while (argv[2][j] != '\0')
			{
				if (argv[1][i] == argv[2][j])
				{
					if (repeat (argv[1], argv[1][i], i) == 1)  
					{
						write(1, &argv[1][i], 1);
						break;
					}
				}
				j++;
			}
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
} 
