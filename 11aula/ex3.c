#include <stdio.h>

int main() {
    int inteiro = 10;
    float real = 2.4;
    char caractere = 'a';

    int* ponteiroInteiro = &inteiro;
    float* ponteiroReal = &real;
    char* ponteiroCaractere = &caractere;

    printf("Valores originais:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %f\n", real);
    printf("Caractere: %c\n", caractere);

    *ponteiroInteiro = 20;
    *ponteiroReal = 3.8;
    *ponteiroCaractere = 'b';

    printf("\nValores após a modificação:\n");
    printf("Inteiro: %d\n", inteiro);
    printf("Real: %f\n", real);
    printf("Caractere: %c\n", caractere);

    return 0;
}