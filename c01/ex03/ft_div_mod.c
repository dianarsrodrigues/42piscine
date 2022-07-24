/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/19 16:39:36 by diarodri          #+#    #+#             */
/*   Updated: 2022/07/19 17:14:16 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}
/*int	main(void)
{
	int a;
	int b;
	int *ta;
	int *tb;

	a = 20;
	b = 2;
	ta = &a;
	tb = &b;
	ft_div_mod(a, b, ta, tb);
	printf("%d e %d", *ta, *tb);
	return(0);
}*/
