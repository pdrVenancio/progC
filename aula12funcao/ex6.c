#include <stdio.h>

long long int fatorial(int x) {
    if (x == 0 || x == 1) {
        return 1;
    } else {
        long long int resultado = 1;

        for (int i = 2; i <= x; i++) {
            resultado = resultado * i;
        }
        return resultado;
    }
}

double serie(int n) {
    double soma = 0.0, termo;

    for (int i = 0; i < n; i++) {
        termo = (double)i / fatorial(i * 2);
        soma += termo;
    }
    return soma;
}
int main(){

    int n;

    scanf("%d", &n);

    serie(n);

    return 0;
}