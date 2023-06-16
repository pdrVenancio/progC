#include <stdio.h>

int main() {
    long long cpf;
    int digits[10] = {0}; // Array para contar o número de ocorrências de cada dígito
    
    printf("Digite o número do CPF: ");
    scanf("%lld", &cpf);
    
    // Contagem dos dígitos
    while (cpf > 0) {
        int digit = cpf % 10; // Obtém o dígito menos significativo
        digits[digit]++; // Incrementa a contagem do dígito
        cpf /= 10; // Remove o dígito menos significativo
    }
    
    // Exibição dos resultados
    printf("Resultado:\n");
    for (int i = 0; i < 10; i++) {
        printf("%d = %d\n", i, digits[i]);
    }
    
    return 0;
}
