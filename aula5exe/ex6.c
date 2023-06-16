#include<stdio.h>

int main()
{
    float s, e;
    
    printf("Digite o seu salario e o valor da prestação do emprestimo:\n");
    scanf("%f %f", &s, &e);
    
    if(e <= s*0.2){
        printf("Emprestimo concedido\n");
    }else
        printf("Emprestimo negado\n");
    
    return 0;
    
}
