#include <stdio.h>

typedef struct {
    float real;
    float imag;
} complexo;

int main() {
    complexo num1, num2, soma, sub, mult;

    scanf("%f %f", &num1.real, &num1.imag);
    scanf("%f %f", &num2.real, &num2.imag);

    soma.real = num1.real + num2.real;
    soma.imag = num1.imag + num2.imag;

    sub.real = num1.real - num2.real;
    sub.imag = num1.imag - num2.imag;

    mult.real = (num1.real * num2.real) - (num1.imag * num2.imag);
    mult.imag = (num1.real * num2.imag) + (num1.imag * num2.real);

    printf("Soma: %f + (%f)i\n", soma.real, soma.imag);
    printf("Subtracao: %f + (%f)i\n", sub.real, sub.imag);
    printf("Produto: %f + (%f)i\n", mult.real, mult.imag);

    return 0;
}
