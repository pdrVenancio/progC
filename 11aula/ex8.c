#include<stdio.h>
#include<stdlib.h>

int main(){

    int  vet[10], i;
    int *pos = vet;

    for ( i = 0; i < 10; i++)
    {
        scanf("%d", &vet[i]);
    }

    int min, max , min2, max2, p1 = 0, p2 = 0, temp;

    min = *pos;
    max = *pos;

    for ( i = 0; i < 10; i++)
    {
        if( *(pos + i) <= min)
            min = *(pos + i);
        if( *(pos + i) >= max)
            max = *(pos + i);
    }

    min2 = *pos;
    max2 = *pos;

    for ( i = 0; i < 10; i++)
    {
        if( *(pos + i) < min2 && *(pos + i) > min)
        {
            min2 = *(pos + i); 
            p1 = i;
        }
        if( *(pos + i) > max2 && *(pos + i) < max)
        {
            max2 = *(pos + i);
            p2 = i;
        }
            
    }

    temp = *(pos + p2);
    *(pos + p2) = *(pos + p1);
    *(pos + p1) = temp;

    for ( i = 0; i < 10; i++)
    {
        printf("%d ", *(pos + i));
    }

    return 0;
}
