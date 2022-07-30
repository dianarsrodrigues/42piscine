/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/30 14:47:21 by diarodri          #+#    #+#             */
/*   Updated: 2022/07/30 14:47:25 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	int	fact;
	
	fact = 1;
	if (nb > 0)
	{
		fact = nb * ft_recursive_factorial(nb - 1);
	}
	else if (nb < 0)
		return (0);
	return (fact);
}
/*int main (void)
{
	printf("%i", ft_recursive_factorial(10));
}*/
