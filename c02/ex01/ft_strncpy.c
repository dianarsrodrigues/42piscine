/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/21 10:40:39 by diarodri          #+#    #+#             */
/*   Updated: 2022/07/21 11:56:11 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
/*int	main(void)
{
	char texto[] = "teste 42";
	char *src = texto;
	char dest[] = "teste 42";
	int n = 5;

	printf("%s\n", dest);
	ft_strncpy (dest, src, n);
	printf("%s\n", dest);
	strncpy (dest, src, n);
	printf("%s", dest);
	return (0);
}*/
