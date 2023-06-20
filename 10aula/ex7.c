#include <stdio.h>
#include <string.h>

struct livro
{
    char ttl[99], escritor[99];
    int ano;
};

int main()
{
    struct livro l[8];
    int i;
    char pesq[99] ;

/*
for ( i = 0; i < 8; i++)
    {
        scanf("%[^\n] %[^\n] %d%*c", l[i].ttl, l[i].escritor, &l[i].ano);
    }

do {
    fgets(pesq, 99, stdin);

    printf("Livros de %s: ", pesq);

    for ( i = 0; i < 8; i++)
        if (strcmp(pesq, l[i].escritor) == 0)
        {
            printf("%s (%d)\n", l[i].ttl, l[i].ano);
        }
    printf("\n");

} while (strcmp(pesq, "sair\n") != 0);
*/   
    fgets(l[0].escritor, 99, stdin);
    fgets(pesq, 99, stdin);

    i = 0;
    while(pesq[i] != '\0')
    {
        printf("%d ", pesq[i]);i++;
    }
     printf("\n ");
    i = 0;
    while(l[0].escritor[i] != '\0')
    {
        printf("%d ", l[0].escritor[i]);i++;
    }
       
    return 0;
}