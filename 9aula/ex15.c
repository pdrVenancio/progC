#include <stdio.h>

int main() {
    char frase[100];
    int count = 0, i;

    
    fgets(frase, 100, stdin);

    for (i = 0; frase[i] != '\0'; i++) {
        // Verifica se o caractere atual é uma letra e o próximo caractere não é uma letra
        if (frase[i+1] == ' ' || frase[i+1] == '\n' ) {
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}
