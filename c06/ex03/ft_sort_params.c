/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diarodri <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/31 14:38:34 by diarodri          #+#    #+#             */
/*   Updated: 2022/07/31 14:38:37 by diarodri         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(const char *a, const char *b)
{
	while (*a && *a == *b)
	{
		a++;
		b++;
	}
	return (*a - *b);
}

void	ft_print_params(int argc, char **argv)
{
	int	n;
	int	i;

	if (argc > 1)
	{	
		n = 1;
		i = 0;
		while (n < argc)
		{
			i = 0;
			while (argv[n][i] != '\0')
			{
				write(1, &argv[n][i], 1);
				i++;
			}
			n++;
		}
	}
}

void	ft_sort_params(int argc, char **argv)
{
	int	n;
	int	i;
	char	*temp;
	
	n = 1;
	while (n < argc)
	{
		i = n;
		while (i > 0 && ft_strcmp(argv[i-1], argv[i]) > 0)
		{
			temp = argv[i-1];
			argv[i-1] = argv[i];
			argv[i] = temp;
		}
		i--;
	}
}
int	main(int argc, char **argv)
{
	int	i;

	i = 1;
	if (argc > i)
	{
		ft_sort_params(argc - 1, argv + 1);
		write (1, "\n", 1);
		i++;
	}
	return (0);
}
