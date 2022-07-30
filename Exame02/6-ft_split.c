#include <stdlib.h>
#include <stdio.h>

// esta função serve para contar quantos carateres tem uma string / ponteiro
int	ft_strlen(char *str)
{
	int	i = 0;
	while (str[i])
		i++;
	return (i);
}

// "ola tudo bem"
char    **ft_split(char *str)
{
    int i;
    int j;
    int k;
    char **dest;
    char *palavra;

    int numero_fixo_de_tamanho = 100; // a melhorar esta parte, porque não devia ser um número fixo
    dest = (char **)malloc(sizeof(char *) * numero_fixo_de_tamanho);
	palavra = (char *)malloc(sizeof(char) * numero_fixo_de_tamanho);
    i = 0;
    j = 0;
    k = 0; // comprimento da palavra
    while (str[i] != '\0')
    {
        int wordFinished = 0;
        if (str[i] != ' ' && str[i] != '\t' && str[i] != '\n')
        {
            palavra[k++] = str[i];
        } else {
            wordFinished = 1;
        }
        
        if (palavra && (!str[i + 1] || wordFinished)) 
        // se tiver texto na variavel "palavra"
        // e se for a ultima letra ou a palavra já acabou (houve um espaço ou algo)
        // vou adicionar a palavra à minha zona de memória
        {
            dest[j] = (char *)malloc(k * sizeof(char));
            int l = 0;
            while (palavra[l] != '\0')
            {
                dest[j][l] = palavra[l];
                l++;
            }

            // reset à palavra
            k = 0;
            palavra = (char *)malloc(sizeof(char) * numero_fixo_de_tamanho);
            wordFinished = 1;

            // incrementar o index do ponteiro "dest"
            j++;
        }
        i++;
    }

    return dest;
}

int	main(int argc, char **argv)
{
	int		index;
	char	**split;
	(void)	argc;
	split = ft_split(argv[1]);
	index = 0;
	while (split[index])
	{
		printf("%s\n", split[index]);
		index++;
	}
}