/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ctd.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 16:00:31 by diarodri          #+#    #+#             */
/*   Updated: 2022/07/15 16:08:53 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	char a;
	
	a = '9';
	while(a >= '0' )
	{
		write (1, &a, 1);
		a--;
	}
	write (1, "\n", 1);
	return (0);
}

