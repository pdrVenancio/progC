#include <stdio.h>
#include <ctype.h>

int main() {
    char frase[100];
    int i;

    printf("Digite uma frase: ");
    fgets(frase, 100, stdin);

    // Converte a primeira letra para maiúscula
    if (frase[0] >= 'a' && frase[0] <= 'z') {
        frase[0] = toupper(frase[0]);
    }

    for (i = 1; frase[i] != '\0'; i++) {
        // Verifica se o caractere atual é um espaço e o próximo caractere é uma letra
        if (frase[i] == ' ' && (frase[i+1] >= 'a' && frase[i+1] <= 'z')) {
            frase[i+1] = toupper(frase[i+1]);
        }
    }

    printf("Frase com a primeira letra de cada palavra em maiúscula: %s\n", frase);

    return 0;
}
