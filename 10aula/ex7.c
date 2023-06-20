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

 for ( i = 0; i < 8; i++)
    scanf("%[^\n]%*c %[^\n]%*c %d%*c", l[i].ttl, l[i].escritor, &l[i].ano);


   while (strcmp(pesq, "sair") != 0)
   {
        scanf("%[^\n]%*c", pesq);
        
        if (strcmp(pesq, "sair") == 0)
            return 0;
            
        printf("Livros de %s:\n", pesq);

        for ( i = 0; i < 8; i++)
            if (strcmp(pesq, l[i].escritor) == 0)
                printf("%s (%d)\n", l[i].ttl, l[i].ano);
            
        printf("\n");
   }
    return 0;
}

//texte no codigo