#include <unistd.h>
#include <stdio.h>

void    ft_lastword(char *str)
{
    int i;

    i = 0;
    while (str[i] != '\0')
        i++;

    i--;
    while (str[i] == ' ' || str[i] == '\t')
        i--;
    
    int length = i; // 56

    while ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
    {
        i--; // 53
    }
    i++;
    while (i <= length) // n <= t
    {
        write (1, &str[i], 1);
        i++;
    }
}

int main (int argc, char **argv)
{
    if (argc == 2)
    {
        ft_lastword(argv[1]);
        return (0);
    }
    write (1, "fail", 4);
}
