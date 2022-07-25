#include <unistd.h>
#include <stdio.h>
#include <string.h>

int ft_strncmp(char *s1, char *s2, unsigned int n)
{
    unsigned int i;

    i = 0;
    if (i < n - 1)
    {
        while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
        {
        i++;
        } 
        return (s1[i] - s2[i]);
    }
    return (0);
}
int main(void)
{
    char    a[] = "ABCC";
    char    b[] = "ABCD";
    int nbr = 4;

    
    printf("Nome: %s\n", a);
    printf("Nome: %s\n", b);
    int diff = ft_strncmp(a,b, nbr);
    printf("%d\n", diff);
    int test = strncmp(a,b, nbr);
    printf("%d\n", test);
    return (0);  
}