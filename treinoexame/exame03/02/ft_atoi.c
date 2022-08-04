/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 11:37:55 by diarodri          #+#    #+#             */
/*   Updated: 2022/08/04 11:38:01 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	s;
	int	res;
	
	i = 0;
	s = 1;
	res = 0;
	while (str[i] != '\0')
	{
		while (str[i] <= 32)
			i++;	
		if (str[i] == '-')
		{
			s = -1; 
			i++;
		}
		else  if (str[i] == '+')
			i++;
		while (str[i] >= '0' &&  str[i] <= '9')
		{
			res = (res * 10) + str[i] - 48;
			i++;
		}
		return (s * res); 
	}
}
int	main (void)
{
	char n[] = "   -45";
	char m[] = "   -45";
	
	printf("%i\n", ft_atoi(n));
	printf("%i\n", atoi(m));
	return (0);
}
