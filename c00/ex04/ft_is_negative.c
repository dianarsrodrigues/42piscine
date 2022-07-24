/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 12:43:01 by diarodri          #+#    #+#             */
/*   Updated: 2022/07/15 13:06:07 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	char	a;

	if (n < 0)
	{
		a = 'N';
		write(1, &a, 1);
	}	
	else
	{
		a = 'P';
		write(1, &a, 1);
	}
}

int	main(void)
{
	ft_is_negative(0);
	return (0);
}
