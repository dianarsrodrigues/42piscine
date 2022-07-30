/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/29 12:08:08 by diarodri          #+#    #+#             */
/*   Updated: 2022/07/29 12:10:50 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int i;
	int j;
	char tem;
	
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	while (i > j)
	{
		tem = str[i - 1];
		str[i - 1] = str[j];
		str[j] = tem;
		j++;
		i--;
	}
	return (str);
}
int main (int argc, char **argv)
{
	if ( argc == 2)
	{
		printf("%s", ft_strrev(argv[1]));
	}
	return (0); 
}

