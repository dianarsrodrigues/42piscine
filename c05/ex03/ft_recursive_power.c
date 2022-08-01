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
	if (nb > nb * nb)
		return (0);
	else if (power > 1)
	{
		return (nb * ft_recursive_power(nb, power - 1));
	}
	else if (power == 0)
		return (1);
	else if (power < 0)
		return (0);
	else
		return (nb);
}
int main (void)
{
	printf("%i\n",ft_recursive_power(-3, -1));
	printf("%i\n",ft_recursive_power(-3, 0));
	printf("%i\n",ft_recursive_power(-3, 1));
	printf("%i\n",ft_recursive_power(-3, 2));
	printf("%i\n",ft_recursive_power(-3, 3));
	printf("%i\n",ft_recursive_power(0, -1));
	printf("%i\n",ft_recursive_power(0, 0));
	printf("%i\n",ft_recursive_power(0, 2));
	printf("%i\n",ft_recursive_power(4, -1));
	printf("%i\n",ft_recursive_power(4, 3));
	return (0);
}
