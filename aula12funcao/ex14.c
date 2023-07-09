#include <stdio.h>
#include <stdlib.h>

int* somaVetores(int N, int* vetor1, int* vetor2) {
    int* vetorSoma = (int*)malloc(N * sizeof(int));

    for (int i = 0; i < N; i++) {
        *(vetorSoma + i) = *(vetor1 + i) + *(vetor2 + i);
    }

    return vetorSoma;
}

int main() {
    int N;

    printf("Digite o valor de N: ");
    scanf("%d", &N);

    int* vetor1 = (int*)malloc(N * sizeof(int));
    int* vetor2 = (int*)malloc(N * sizeof(int));

    printf("Digite os elementos do primeiro vetor: ");
    for (int i = 0; i < N; i++) {
        scanf("%d", vetor1 + i);
    }

    printf("Digite os elementos do segundo vetor: ");
    for (int i = 0; i < N; i++) {
        scanf("%d", vetor2 + i);
    }

    int* vetorSoma = somaVetores(N, vetor1, vetor2);

    printf("Vetor soma: ");
    for (int i = 0; i < N; i++) {
        printf("%d ", *(vetorSoma + i));
    }
    printf("\n");

    free(vetor1);
    free(vetor2);
    free(vetorSoma);

    return 0;
}
