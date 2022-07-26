/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:32:38 by diarodri          #+#    #+#             */
/*   Updated: 2022/07/21 16:49:42 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strlowcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			(str[i] += 32);
		}
		i++;
	}
	return (str);
}
/*char	main(void)
{
	char n[] = "TESTE";
	char *str = n;

	printf("%s\n", str);
	char *det = ft_strlowcase(str);
	printf("%s", det);
	return (0);
}*/
