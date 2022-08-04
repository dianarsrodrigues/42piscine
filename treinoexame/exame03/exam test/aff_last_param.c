/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aff_last_param.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:32:55 by diarodri          #+#    #+#             */
/*   Updated: 2022/08/04 15:32:56 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <limits.h>

int	main(int argc, char **argv)
{
	int	i;
	int	n;
	
	i = 0;
	n = (argc - 1);
	if (argc > 1)
	{
		while (argv[n][i] != '\0')
		{
			write (1, &argv[n][i], 1);
			i++;
		}
	}
	write (1, "\n", 1);
	return (0);
}
