/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush04.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/16 12:04:29 by diarodri          #+#    #+#             */
/*   Updated: 2022/07/17 11:48:18 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

void	ft_putchar(char letra);

void	rush(int x, int y)
{
	int	c;
	int	l;

	c = 1;
	l = 1;
	while (l <= y && l > 0)
	{
		while (c <= x && c > 0)
		{
			if ((l == 1 && c == 1) || (l == y && c > (x-1) && 1 != c))
				ft_putchar('A');
			else if ((l == 1 && c == x) || (l == y && c == 1))
				ft_putchar('C');
			else if (((l == y || l == 1) && 2 >= c < x) || ((c == 1 || c == x)
					&& 2 >= l < y))
				ft_putchar('B');
			else
				ft_putchar(' ');
			c++;
		}
		l++;
		c = 1;
		ft_putchar('\n');
	}
}

int	main(void)
{
	rush(1, 5);
	return (0);
}
