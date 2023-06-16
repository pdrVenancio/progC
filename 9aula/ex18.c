#include <stdio.h>
#include <string.h>

#define MAX_PALAVRA 100

int main() {
    char palavra1[MAX_PALAVRA];
    char palavra2[MAX_PALAVRA];
    char frase[MAX_PALAVRA * 2 + 1]; // Tamanho máximo da frase considerando as duas palavras e o espaço entre elas

    printf("Digite a primeira palavra: ");
    fgets(palavra1, MAX_PALAVRA, stdin);

    printf("Digite a segunda palavra: ");
    fgets(palavra2, MAX_PALAVRA, stdin);

    palavra1[strcspn(palavra1, "\n")] = '\0'; // Remove o caractere de nova linha '\n'
    palavra2[strcspn(palavra2, "\n")] = '\0'; // Remove o caractere de nova linha '\n'

    strcpy(frase, palavra1);
    strcat(frase, " ");
    strcat(frase, palavra2);

    printf("Frase: %s\n", frase);

    return 0;
}
