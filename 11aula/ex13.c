#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int main()
{
    int *vet= NULL,  *srt= NULL, i, j;

    vet = (int*)malloc(15 *sizeof(int));
    srt = (int*)malloc(15 *sizeof(int));

    for ( i = 0; i < 15; i++)
    {
        scanf("%d", vet+i);
    }
   
    srand(time(NULL));

    for (i = 0; i < 15; i++) {
        int numero = (rand() % 25) + 1;
        *(srt+i) = numero;
    }

    printf("\nSortiado: ");
    for (j = 0; j < 15; j++) {
        for (i = 0; i < 15; i++) {
            if (*( vet + j) == *(srt + i)) {
                printf("%d ", *(srt + i));
            }
        }
    }
    
    free(vet);
    free(srt);

    return 0;
}