#include <stdlib.h>
#include <stdio.h>

int     ft_ultimate_range(int **range, int min, int max)
{

	int		size;
	int		i;
	int		*buffer;
	int		*d;

	if (min >= max)
	{
		*range = 0;
		return (0);
	}
	size = max - min;
	d = (buffer = malloc(size * sizeof(int)));
	if (!d)
	{
		*range = 0;
		return (-1);
	}
	*range = buffer;
	i = 0;
	while (i < size)
	{
		buffer[i] = min + i;
		i++;
	}
	return (size);
}
int		main(void)
{
	int	min;
	int	max;
	int	*num;
	int	size;
	int	i = 0;

	min = 5;
	max = 10;
	size = ft_ultimate_range(&num, min, max);
	while(i < size)
	{
		printf("%d, ", num[i]);
		i++;
	}

}