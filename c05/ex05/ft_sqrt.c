#include <stdio.h>

int     ft_sqrt(int nb)
{
    int i;

    i = 1;
    if (nb > 0)
    {
        while (i * i <= nb)
        {
            if (i * i == nb)
                return (i);
            i++;
        }
    }
    return (0);
}
int main (void)
{
    printf("%d\n", ft_sqrt(-10));
    printf("%d\n", ft_sqrt(-1));
    printf("%d\n", ft_sqrt(0));
    printf("%d\n", ft_sqrt(1));
    printf("%d\n", ft_sqrt(2));
    printf("%d\n", ft_sqrt(3));
    printf("%d\n", ft_sqrt(4));
    printf("%d\n", ft_sqrt(9));
    printf("%d\n", ft_sqrt(2147395600));
    return (0);
}