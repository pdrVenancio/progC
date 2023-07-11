#include<stdio.h>
#include<stdlib.h>

int main(){

    int vet[10], i;
    int *pos = vet;

    for ( i = 0; i < 10; i++)
    {
        scanf("%d", &vet[i]);
    }
    for ( i = 0; i < 10; i++)
    {
        printf("endereco: %p \t", pos + i);
        printf("valor: %d  \n", *(pos + i));

    }
    return 0;
}