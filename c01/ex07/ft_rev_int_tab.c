/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 10:49:49 by diarodri          #+#    #+#             */
/*   Updated: 2022/07/20 10:51:25 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	tep;
	int	i;

	i = 0;
	while (i < (size / 2))
	{
		tep = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = tep;
		i++;
	}	
}
/*
int	main(void)
{
	int n[6] = {6, 5, 4, 3, 2, 1};
	int *ptn = n;
	int size = 6;
	
	ft_rev_int_tab(ptn, size);
	printf("%d, %d, %d, %d, %d, %d", n[0], n[1], n[2], n[3], n[4], n[5]);
	return (0);
}*/
