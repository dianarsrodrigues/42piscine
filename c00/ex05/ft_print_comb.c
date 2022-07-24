/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 13:08:41 by diarodri          #+#    #+#             */
/*   Updated: 2022/07/15 15:20:14 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	int	i[3];

	i[0] = '0';
	while (i[0] <= '7')
	{
		i[1] = i[0] + 1;
		while (i[1] <= '8')
		{
			i[2] = i[1] + 1;
			while (i[2] <= '9')
			{
				write (1, &i[0], 1);
				write (1, &i[1], 1);
				write (1, &i[2], 1);
				{	
					if (i[0] != '7')
						write (1, ", ", 2);
				}
				i[2]++;
			}
			i[1]++;
		}
		i[0]++;
	}
}

int	main(void)
{
	ft_print_comb();
	return (0);
}