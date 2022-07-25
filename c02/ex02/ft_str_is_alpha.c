/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 12:43:24 by diarodri          #+#    #+#             */
/*   Updated: 2022/07/21 13:29:59 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z'))
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
	char n[] = "hEllo";
	char f[] = "helo!!";
	char g[] = "!!";
	
	printf ("%d\n", ft_str_is_alpha (n));
	printf ("%d\n", ft_str_is_alpha (f));	
	printf ("%d", ft_str_is_alpha (g));	
}*/
