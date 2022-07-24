/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 15:59:23 by diarodri          #+#    #+#             */
/*   Updated: 2022/07/19 16:37:22 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tr;

	tr = *a;
	*a = *b;
	*b = tr;
}
/*int	main(void)
{
	int a;
	int b;
	int *ta;
	int *tb;

	a = 10;
	b = 20;
	ta = &a;
	tb = &b;
	ft_swap(ta, tb);
	printf("%d", a);
	printf("%d", b);
	return(0);	
}*/
