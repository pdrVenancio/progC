#include <stdio.h>
#include <stdlib.h>

int main(){

    int vet[10], i;

    int *pos = vet;

    for ( i = 0; i < 10; i++)
    {
        scanf("%d", &vet[i]);
    }

    for ( i = 0; i < 10; i++)
    {
        printf("valor: %d\t", *(pos +i));
    }
    
    printf("\n\n");

    for ( i = 0; i < 10; i++)
    {
        if(*(pos + i) % 2 == 0)
            *(pos + i)= *(pos + i) + 1;
        else
            *(pos + i) = *(pos + i) * 2;
        
    }

    for ( i = 0; i < 10; i++)
    {
        printf("valor novo: %d\t", *(pos +i));
    }
    
    

    return 0;
}