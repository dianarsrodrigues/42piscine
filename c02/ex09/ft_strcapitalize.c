/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 16:51:02 by diarodri          #+#    #+#             */
/*   Updated: 2022/07/21 18:23:52 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	a;

	if (str[0] >= 'a' && str[0] <= 'z')
		str[0] -= 32;

	i = 1;
	a = 0;	
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z' && ((str[a] >= ' ' && str[a] <= '/') 
			|| (str[a] >= ':' && str[a] <= '@')
				|| (str[a] >= '[' && str[a] <= '`')))
		{
			str[i] -= 32;
		}	
		i++;
		a++;
	}
	return (str);	
}
int	main (int argc,char *argv[])
{
	if (argc == 2)
	{
		printf("%s\n", argv[1]);
		char *det = ft_strcapitalize(argv[1]);
		printf("%s", det);
		
	}
	write (1, "\n", 1);
}
	
	
	
	/*char n[] = "oi, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";
	char *str = n;

	printf("%s\n", str);
	char *det = ft_strcapitalize(str);
	printf("%s", det);
}*/
