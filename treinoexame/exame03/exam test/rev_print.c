/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:13:03 by diarodri          #+#    #+#             */
/*   Updated: 2022/08/04 15:13:05 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_rev_print(char *str)
{
	int	i;
	
	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		write (1, &str[i], 1);
		i--;
	}
}
/*int main (int argc, char **argv)
{
	if (argc == 2)
	{
		ft_rev_print(argv[1]);
	}
	write (1, "\n", 1);
	return (0);
}*/
