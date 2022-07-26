/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 14:38:34 by diarodri          #+#    #+#             */
/*   Updated: 2022/07/31 14:38:37 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_sort_params(int argc, char **argv)
{
	int	n;
	int	i;

	if (argc > 1)
	{	
		n = 1;
		i = 0;
		while (n < argc)
		{
			i = 0;
			while (argv[n][i] != '\0')
			{
				write(1, &argv[n][i], 1);
				write (1, "\n", 1);
				i++;
			}
			n++;
		}
	}
}

int	main(int argc, char **argv)
{
	if (argc > 1)
	{
		ft_sort_params(argc, argv);
	}
	return (0);
}
