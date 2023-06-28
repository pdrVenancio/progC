#include <stdio.h>
#include <stdlib.h>//maloc
/*struct aluno
{
    int matricula;
    char nome[80];
    int dia, mes, ano;
    float iea;
}aluno;
*/
int main()
{
    //sizeof() 
    //printf("tamanho aluno %d \n", sizeof(aluno));
    
    float *p = NULL;
    int i;

    // alocando 100 posiçoes de float 
    p = (float *)malloc(100 * sizeof(float));

    if (p == NULL)
    {
        printf("falha na alocação de memoria...\n");
        exit(1);
    }
    for ( i = 0; i < 5; i++)
    {
        printf("digite o valor de p: ");
        scanf("%f", &p[i]);
    }
    for ( i = 0; i < 5; i++)
    {
        printf("p: %f\n", p[i]);
    
    }    

    free(p);

    return 0;
}