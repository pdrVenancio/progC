#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct livro {
    char nome[50];
    char autor[50];
    int pag;
    int ano;
} livro;

int main() {
    FILE *arq = fopen("bd.txt", "rb");
    if (arq == NULL) {
        printf("Erro ao abrir o arquivo.\n");
        return 1;
    }

    livro b[100];   // Vetor de estruturas para armazenar os livros
    int cont = 0;   // Contador para o número de livros

    while (fread(&b[cont], sizeof(livro), 1, arq) == 1) {
        cont++;
    }

    fclose(arq);

    // Mostrando o conteúdo do vetor de livros
    printf("Livros cadastrados:\n");
    for (int i = 0; i < cont; i++) {
        printf("Livro %d:\n", i + 1);
        printf("  Título: %s\n", b[i].nome);
        printf("  Autor: %s\n", b[i].autor);
        printf("  Páginas: %d\n", b[i].pag);
        printf("  Ano: %d\n", b[i].ano);
        printf("\n");
    }

    return 0;
}

