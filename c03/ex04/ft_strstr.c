/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/25 15:25:35 by diarodri          #+#    #+#             */
/*   Updated: 2022/07/25 15:46:53 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <string.h>

char	*ft_strstr(char *str, char *to_find)
{
    int i;
	int j;

	i = 0;
	if (to_find[j] == '\0')
        return (str);
	while (str[i] != '\0')
	{
		j = 0;
		while (str[i + j] != '\0' && str[i + j] == to_find[j])
		{
			if (to_find[j + 1] == '\0')
				return (&str[i]);
			j++;
		}
		i++;
	}
	return (0);
}
int main (void) 
{
    char str[] = "Diana Rodrigues 42 Porto";
    char to_find[] = "42 Porto";
    char *text;
    
    text = ft_strstr(str, to_find);
    printf("The substring is: %s\n", text);
    return(0);
}
