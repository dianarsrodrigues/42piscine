/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 12:25:22 by diarodri          #+#    #+#             */
/*   Updated: 2022/07/15 12:40:49 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	int	numbers;

	numbers = 48;
	while (numbers <= 57)
	{
		write (1, &numbers, 1);
		numbers++;
	}
}

int	main(void)
{
	ft_print_numbers();
	return (0);
}
