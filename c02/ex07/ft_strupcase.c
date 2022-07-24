/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:04:01 by diarodri          #+#    #+#             */
/*   Updated: 2022/07/21 16:31:20 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			(str[i] -= 32);
		}
		i++;
	}
	return (str);
}
/*char	main(void)
{
	char  n[] = "teste";
	char *str = n;

	printf("%s\n", str);
	char *det = ft_strupcase(str);
	printf("%s\n", det);
	return (0);
}*/
