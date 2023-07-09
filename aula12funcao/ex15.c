#include<stdio.h>

int minMaxVet(int *vet, int n, int *min, int *max)
{
    *min = *vet;
    *max = *vet;

    int i;

    for ( i = 0; i < n; i++)
    {
        if (*(vet + i) < *min) {
            *min = *(vet + i);
        }

        if (*(vet + i) > *max) {
            *max = *(vet + i);
        }
    }
}

int main(){

    int n;
    scanf("%d", &n);

    int *vet = (int*)malloc(n * sizeof(int));

    int min, max;

    minMaxVet(vet, n, &min, &max);

    printf("%d %d\n", min, max);

    free(vet);

    return 0;
}