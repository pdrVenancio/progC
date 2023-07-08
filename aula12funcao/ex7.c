#include <stdio.h>
#include <string.h>

int soma(char n[]) {
    int tam = strlen(n);
    int i, soma = 0;

    for (i = 0; i < tam; i++) {
        soma += n[i] - '0';
    }

    return soma;
}

int main() {
    char n[100];

    scanf("%s", n);

    int resultado = soma(n);
    printf("%d\n", resultado);

    return 0;
}
