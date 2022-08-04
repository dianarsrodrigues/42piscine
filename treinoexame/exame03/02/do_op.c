/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   do_op.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 11:15:18 by diarodri          #+#    #+#             */
/*   Updated: 2022/08/04 11:15:20 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	main(int argc, char **argv)
{
	int	a;
	int	b;
	int	op;
	int	res;
	
	res = 0;
	if (argc == 4)
	{
		a = atoi(argv[1]);
		b = atoi(argv[3]);
		op = argv[2][0];
		if (op == '+')
			res = a + b;
		else if (op == '-')
			res = a - b;
		else if (op == '*')
			res = a * b;
		else if (op == '/')
			res = a / b;
		else if (op == '%')
			res = a % b;
		printf("%d\n", res);
	}
	else
		write (1, "\n", 1);
	return (0);
}
