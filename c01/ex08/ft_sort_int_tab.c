/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/20 12:45:46 by diarodri          #+#    #+#             */
/*   Updated: 2022/07/20 12:45:53 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_sort_int_tab(int *tab, int size)
{
	int	j;
	int	tem;

	while (size >= 0)
	{
		j = 0;
		while (j < (size - 1))
		{
			if (tab[j] > tab[j + 1])
			{
				tem = tab[j + 1];
				tab[j + 1] = tab[j];
				tab[j] = tem;
			}
			j++;
		}
		size--;
	}	
}
/*int	main(void)
{
	int n[5] = {5, 0, -1, 44, 2};
	int *ptn = n;
	int size;
	
	size = 5;
	ft_sort_int_tab(ptn, size);
	printf(" %d, %d, %d, %d, %d", n[0], n[1], n[2], n[3], n[4]);
	return(0);
}*/
