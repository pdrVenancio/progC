#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nCit[40];
    int hab, cont = 0;

    FILE *arq = NULL;

    arq = fopen("bd.txt", "w");

    if (!arq)
    {
        printf("Erro ao abrir o arquivo.");
        exit(1);
    }

    printf("0 - Continua\n1 - Para o programa\n");

    while (cont == 0)
    {
        printf("\nCidade: ");
        scanf(" %[^\n]", nCit);
        printf("Populacao: ");
        scanf(" %d", &hab);

        fprintf(arq, "%s\t%d\n", nCit, hab);

        getchar(); // Consumir o caractere de nova linha (\n)

        printf("0 - Continua\n1 - Para o programa\nOpcao: ");
        scanf(" %d", &cont);
    }

    fclose(arq);
    return 0;
}
