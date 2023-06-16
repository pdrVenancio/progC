#include <stdio.h>
#include <ctype.h>

#define MAX_FRASE 100

int main() {
    char frase[MAX_FRASE];
    int letras_minusculas = 0, letras_maiusculas = 0;
    int i = 0;

    printf("Digite uma frase: ");
    fgets(frase, MAX_FRASE, stdin);

    while (frase[i] != '\0') {
        if (islower(frase[i])) {
            letras_minusculas++;
        } else if (isupper(frase[i])) {
            letras_maiusculas++;
        }
        i++;
    }

    printf("%d %d", letras_minusculas, letras_maiusculas);

    return 0;
}
