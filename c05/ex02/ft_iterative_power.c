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

	res = 1;
	while (power != 0)
	{
		res *= nb;
		--power;
	}
	if (nb < 0)
		return (0);
	return (res);
}
/*int main (void)
{
	int res = ft_iterative_power(3, 4);
	printf("%i", res); 
	return (0);
}*/
