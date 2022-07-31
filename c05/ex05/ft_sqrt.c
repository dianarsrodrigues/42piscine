#include <stdio.h>

int     ft_sqrt(int nb)
{
    int i;

    i = 0;
    if (nb <= 0)
        return (0);
    while (i * i < nb)
    {
        i = i + 1;
        root = (nb / root + root) / 2;
    }
    return (root);
}
int main (void)
{
    printf("%d", ft_sqrt(5));
    return (0);
}