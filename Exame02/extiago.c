// numa string qual é a posição do primeiro z

#include <stdio.h>

int main (int argc, char **argv)
{
    int i;

    i = 0;
    while (argv[1][i] != 'z')
        i++;
    
    printf("%i", ++i);
    return(0);
}