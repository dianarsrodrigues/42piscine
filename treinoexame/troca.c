/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   troca.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 16:49:01 by diarodri          #+#    #+#             */
/*   Updated: 2022/07/15 16:56:27 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(void)
{
	char a;
	char b;
	char t;
	
	a = 2;
	b = 6;
	t = a;
	a = b;
	b = t;
	write (1, &a, 1);
	write (1, &b, 1);
	return (0);	
}
