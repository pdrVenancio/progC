#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, i, im = 0, pa = 0;

    scanf("%d ", &n);

    int *vet = (int*)malloc(n * sizeof(int));

    for ( i = 0; i < n; i++)
    {
        scanf("%d", vet+i);
    }
    
    for ( i = 0; i < n; i++)
    {
        if(*(vet+i) % 2 == 0)
            pa++;
        else
            im++;
    }
    
    printf("par = %d \nimpar = %d \n", pa, im);

    free(vet);

    return 0;
}