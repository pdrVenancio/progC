#include<stdio.h>
#include<string.h>

#define M 99

struct aluno
{
    char nome[M];
    int mat;
    float n1, n2, n3;
};

int main()
{
    struct aluno p[5];

    int i, indMN = 0, indMM = 0;
    float media[5];
    
    for ( i = 0; i < 5 ; i++)
    {
            scanf(" %d%*c %[^\n]%*c %f%*c %f%*c %f%*c", &p[i].mat, p[i].nome, &p[i].n1, &p[i].n2, &p[i].n3);
          
    }
    
// encontre  o  aluno  com  maior  média  geral,  imprimindo  seu  nome  completo,  seguido  
//da  média,  com  2  casas decimais.
    

    for ( i = 0; i < 5; i++)
    {
        media[i] = (p[i].n1 +  p[i].n2 + p[i].n3) / 3;
    }

    for ( i = 0; i < 5; i++)
        if(media[i] > media[indMM])
            indMM = i; 

//encontre  o  aluno com  maior  nota  na  primeira  prova,  imprimindo  seu  nome  completoe  a  nota,  
//com 2casas  decimais.
    for ( i = 0; i < 5; i++)
        if(p[i].n1 > p[indMN].n1)
            indMN = i;    
            
///////////////////////////////////////////////////////////////

    printf("Maior nota na P1: %.2f \n%s\n\n", p[indMN].n1 , p[indMN].nome);
    printf("Maior media: %s\nValor: %.2f\n\n", p[indMM].nome, media[indMM]);

//imprima  uma  listagem  de  matrículae  nome,  
//dizendo  também  se cada  alunofoi  aprovado  ou reprovado, considerando ao menos 60% de média para a aprovação.

    for ( i = 0; i < 5; i++)
    {
        if(media[i] >= 6)
            printf("%d %s Aprovado\n", p[i].mat,  p[i].nome);
        else if (media[i] < 6)
            printf("%d %s Reprovado\n", p[i].mat,  p[i].nome);
    }
    
    return 0;
}

