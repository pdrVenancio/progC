#include <stdio.h>

int main()
{
    
    int tam;

    scanf("%d", &tam);

    int vet[tam];
    
    for (int i = 0; i < tam; i++) 
        scanf("%d", &vet[i]);
    
    avgvet(vet, tam);

    return 0;
}

double avgvet(int *vet, int n)
{
    double soma = 0.0, media;
    int i;

    for ( i = 0; i < n ; i++)
    {
       soma += vet[i];
    }
    
    media = soma / n;

    return media;

}