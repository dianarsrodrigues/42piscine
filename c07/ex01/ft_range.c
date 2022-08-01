/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 17:06:27 by diarodri          #+#    #+#             */
/*   Updated: 2022/08/01 17:06:30 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*num;
	int range;
	int	i;
	
	
	if (min >= max)
		return (0);
	range = max - min;
	num = malloc(range *sizeof(int));
	if (num == '\0')
		return (0);
	i = 0;
	while (i < range)
	{
		num[i] = min + i;
		i++; 
	}
	return (num);
}
int	main(void)
{
	int *num;
	int max;
	int min;
	int i = 0;
	int range; 
	 
	min = 0;
	max = 10;
	range = max - min;
	num = ft_range(min, max);
	while(i < range)
	{
		printf("%d,  ", num[i]);
		i++;
	}
	return (0);
	
}
