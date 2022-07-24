/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 17:15:00 by diarodri          #+#    #+#             */
/*   Updated: 2022/07/20 09:33:29 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	c;
	int	d;

	c = *a;
	d = *b;
	*a = c / d;
	*b = c % d;
}
/*int	main(void)
{
	int c;
	int d;
	int *tc;
	int *td;

	c = 20;
	d = 10;
	tc = &c;
	td = &d;
	ft_ultimate_div_mod(tc,td);
	printf("%d e %d", c, d);
	return(0);
}*/
