/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   atoi.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 16:56:11 by diarodri          #+#    #+#             */
/*   Updated: 2022/08/04 16:56:13 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

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
		if (str[i] == '+')
			i++;
		else if (str[i] == '-')
		{
			s = -1;
			i++;
		}
		while (str[i] >= '0' && str[i] <= '9')
		{
			res = res * 10 + str[i] - 48;
			i++;  
		}
		return (res * s);
	}
}
int	main (void)
{
	char n[] = "    abcdefghij123cgd";
	char m[] = "    abcdefghij123cgd";
	
	printf("%d\n", ft_atoi(n));
	printf("%d\n", atoi(m));
	return (0);
}
