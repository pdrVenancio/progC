#include<stdio.h>

int maxvet(int *vet, int n) {
    int max = vet[0];  
    
    for (int i = 1; i < n; i++) {
        if (vet[i] > max) {
            max = vet[i];
        }
    }
    
    return max;
}

int main(){

    int tam;

    scanf("%d", &tam);

    int vet[tam];
    
    for (int i = 0; i < tam; i++) 
        scanf("%d", &vet[i]);
    
    maxvet(vet, tam);

    return 0;
}