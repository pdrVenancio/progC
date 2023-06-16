#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main() {
    char frase[99];
    double numeros[4];
    double soma = 0.0;
    int indice = 0;
    int i;

    fgets(frase,99, stdin);

    for (i = 0; i < strlen(frase); i++) {
        if (frase[i] == ' ') {
            indice++;
        } else {
            numeros[indice] = atof(frase + i);
            while (frase[i] != ' ' && frase[i] != '\0') {
                i++;
            }
            soma += numeros[indice];
        }
    }

    printf("%lf", soma);

    return 0;
}
