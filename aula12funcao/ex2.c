#include <stdio.h>

int primo(int n) {
    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return 0; 
        }
    }

    return 1; // Se o número não for divisível por nenhum valor entre 2 e n/2, é primo
}
int main(){

    int n;

    scanf("%d", &n);

    primo(n);

    return 0;
}