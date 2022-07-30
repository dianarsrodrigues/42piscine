/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   firstword2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 15:16:44 by diarodri          #+#    #+#             */
/*   Updated: 2022/07/22 15:37:09 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	ft_word(char *str)
{
	int i;

	i = 0;
	while(str[i] == ' ' || str[i] == '\t') 
	{
		i++;
	}
	while(str[i] != ' ' && str[i] != '\t' && str[i] != '\0')
	{
		write(1, &str[i], 1);
		i++;
	}
}
int	main(int ac,char **av)
{
	if (ac == 2)
	{
		ft_word(av[1]);
	}
	write (1, "\n", 1);
	return (0);
}
