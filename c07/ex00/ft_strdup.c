/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/01 15:49:01 by diarodri          #+#    #+#             */
/*   Updated: 2022/08/01 15:49:04 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*tmp;
	int		i;

	i = 0;
	tmp = (char *) malloc(sizeof(char));
	while (src[i] != '\0')
	{
		tmp[i] = src[i];
		i++;
	}
	tmp[i] = '\0';
	return (tmp);
}
/*int	main(void)
{
	char src[10] = "Diana R";
	
	char *tmp = ft_strdup(src);
	printf("%s", tmp);
	return (0);
}*/
