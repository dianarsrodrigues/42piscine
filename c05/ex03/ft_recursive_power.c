/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 15:17:28 by diarodri          #+#    #+#             */
/*   Updated: 2022/07/30 15:17:30 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	res;

	res = 1;
	if (power != 0)
	{
		res = nb * ft_recursive_power(nb, power - 1);
	}
	return (res);
}
/*int main (void)
{
	int res = ft_recursive_power(3, 4);
	printf("%i", res);
	return (0);
}*/
