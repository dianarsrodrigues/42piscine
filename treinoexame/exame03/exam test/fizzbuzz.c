/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fizzbuzz.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 14:31:45 by diarodri          #+#    #+#             */
/*   Updated: 2022/08/04 14:32:31 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	number(int n)
{
	if (n > 9)
		number(n / 10);
	write (1, &"0123456789"[n % 10], 1);
}

int	main(void)
{
	int	i;
	
	i = 1;
	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 == 0)
			write (1, "fizzbuzz\n", 9);
		else if (i % 3 == 0)
			write (1, "fizz\n", 5);
		else if (i % 5 == 0)
			write (1, "buzz\n", 5);
		else 
		{
			number(i);
			write (1, "\n", 1);
		}
		i++;
	}
	return (0);
}
