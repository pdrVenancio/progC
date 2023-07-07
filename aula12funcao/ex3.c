#include <stdio.h>

float nota(float n1, float n2, float n3, char l) {
    if (l == 'A')
        return (n1 + n2 + n3) / 3;
    else if (l == 'P')
        return (n1 * 5 + n2 * 3 + n3 * 2) / 10;
    else
        return -1.0;  // Valor inválido para o parâmetro 'l'
}

int main() {
    float n1, n2, n3;
    char l;

    scanf("%f %f %f %c", &n1, &n2, &n3, &l);

    float resultado = nota(n1, n2, n3, l);
    printf("%.2f\n", resultado);

    return 0;
}