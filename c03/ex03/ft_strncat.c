#include <stdio.h>
#include <unistd.h>
#include <string.h>

char    *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int i;
    int j;

    i = 0;
    j = 0;
    if (i < nb - 1)
    {
        while (dest[i] != '\0')
        {
            i++;
        }
        while (src[j] != '\0')
        {
            dest[i + j] = src[j];
            j++;
        }
        dest[i + j] = '\0';
        return dest;
    }
    return "";
}
int main(void)
{
    char src[30] = "Rodrigues";
    char dest[30] = "Diana";
    int nb = 50;

    ft_strncat(dest, src, nb);
    printf("%s\n", dest);
    strncat(dest, src, nb);
    printf("%s", dest);
    return (0);
}