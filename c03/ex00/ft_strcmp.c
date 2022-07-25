#include <unistd.h>
#include <string.h>
#include <stdio.h>

int ft_strcmp(char *s1, char *s2)
{
    int i;
    
    i = 0;
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0')
    {
        i++;
    } 
    return (s1[i] - s2[i]);
}
int main(void)
{
    char    a[] = "Z";
    char    b[] = "A";

    printf("Nome: %s\n", a);
    printf("Nome: %s\n", b);
    int diff = ft_strcmp(a,b);
    printf("%d\n", diff);
    int test = strcmp(a,b);
    printf("%d\n", test);
    return (0);  
}