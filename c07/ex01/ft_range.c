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
	
	range = max - min;
	num = malloc(range *sizeof(int));
	i = 0;
	num[0] = min;
	while (*num < max)
	{
		num[i] = min;
		min++;
		i++; 
	}
	return (num);
}
int	main(void)
{
	int *num = ft_range(2, 10);
	printf("%ls", num);
	return (0);
	
}
