/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrev.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 15:58:57 by diarodri          #+#    #+#             */
/*   Updated: 2022/08/04 15:58:58 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strrev(char *str)
{
	int	i;
	int	j;
	char	tem;
	
	i = 0;
	j = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	while (j < i)
	{
		tem = str[j];
		str[j] = str[i - 1];
		str[i - 1] = tem;
		j++;
		i--;
	}
	return (str);
}
int main (void)
{
	char n[] = "abcdefgh";
	
	printf("%s\n", ft_strrev(n));
	return (0);
}
