/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/18 09:13:49 by diarodri          #+#    #+#             */
/*   Updated: 2022/07/18 09:39:52 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print(int x, int y)
{
	ft_putchar(x / 10 + '0');
	ft_putchar(x % 10 + '0');
	write (1, " ", 1);
	ft_putchar(y / 10 + '0');
	ft_putchar(y % 10 + '0');
	if (!(x == 98 && y == 99))
	{
		write (1, ", ", 2);
	}
}

void	ft_print_comb2(void)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (x < 99)
	{
		y = x + 1;
		while (y <= 99)
		{
			print(x, y);
			y++;
		}
		x++;
	}
}

int	main(void)
{
	ft_print_comb2();
	return (0);
}
