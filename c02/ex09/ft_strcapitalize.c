/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:51:02 by diarodri          #+#    #+#             */
/*   Updated: 2022/07/26 12:29:27 by diarodri         ###   ########.fr       */
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
			str[i] += 32;
		}
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	a;

	i = 0;
	a = 1;
	ft_strlowcase(str);
	if (str[i] >= 'a' && str[i] <= 'z')
	{
		str[i] -= 32;
	}	
	while (str[a] != '\0')
	{
		if ((str[a] >= 'a' && str[a] <= 'z')
			&& ((str[i] >= ' ' && str[i] <= '/')
				|| (str[i] >= ':' && str[i] <= '@')
				|| (str[i] >= '[' && str[i] <= '`')))
		{
			str[a] -= 32;
		}
		i++;
		a++;
	}
	return (str);
}
/*int	main (void)
{
	char n[] = "oi, tudo bem? a42PalAvras quarenta-e-duas; cinquenta+e+um";
	char *str = n;

	printf("%s\n", str);
	char *det = ft_strcapitalize(str);
	printf("%s", det);
}*/
