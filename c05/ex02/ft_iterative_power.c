/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 15:05:20 by diarodri          #+#    #+#             */
/*   Updated: 2022/07/30 15:05:23 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	res;

	res = nb;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 1)
	{
		res *= nb;
		power--;
	}
	return (res);
}
int main (void)
{
	printf("%i\n",ft_iterative_power(-3, -1));
	printf("%i\n",ft_iterative_power(-3, 0));
	printf("%i\n",ft_iterative_power(-3, 1));
	printf("%i\n",ft_iterative_power(-3, 2));
	printf("%i\n",ft_iterative_power(-3, 3));
	printf("%i\n",ft_iterative_power(0, -1));
	printf("%i\n",ft_iterative_power(0, 0));
	printf("%i\n",ft_iterative_power(0, 2));
	printf("%i\n",ft_iterative_power(4, -1));
	printf("%i\n",ft_iterative_power(4, 3));
	return (0);
}
