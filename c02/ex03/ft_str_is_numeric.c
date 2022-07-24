/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 13:30:29 by diarodri          #+#    #+#             */
/*   Updated: 2022/07/21 15:02:03 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			i++;
		}	
		else
			return (0);
	}
	return (1);
}
/*int	main(void)
{
	char n[] = "123456";
	char g[] = "abc12";

	printf("%d\n",ft_str_is_numeric (n));
	printf("%d", ft_str_is_numeric (g));	
}*/
