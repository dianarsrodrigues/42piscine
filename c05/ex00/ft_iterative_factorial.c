/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterarive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 11:17:18 by diarodri          #+#    #+#             */
/*   Updated: 2022/07/30 11:17:21 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_iterative_factorial(int nb)
{
	int	fact;

	fact = 1;
	while (nb > 0)
	{
		fact = fact *= nb;
		nb--;
	}
	if (nb < 0)
		return (0);
	return (fact);
}
/*int main(void)
{
	printf("%i", ft_iterative_factorial(5));
	return (0);
}*/
