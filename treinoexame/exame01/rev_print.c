/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rev_print.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/22 13:29:29 by diarodri          #+#    #+#             */
/*   Updated: 2022/07/22 14:18:01 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_rev_print(char *str)
{
	int i;;
	
	i = 0;
	while (str[i] != '\0')
	{
		i++; 
	}
	while (i >= 0)
	{
		write(1, &str[i], 1);
		i--;
	}
	return (str);
}
int	main(void)
{
	char str[] = "vinicius";

	ft_rev_print(str);
}
