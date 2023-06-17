#include<stdio.h>

struct pessoa
{
    char nome[50];
    char endereco[50];
    int n;
    int idade;
};
int main ()
{
    struct pessoa a;
    
    scanf("%[^\n]", a.nome);
    scanf("%d%*c", &a.idade);
    scanf("%[^\n]", a.endereco);
    scanf("%d%*c", &a.n);

    printf("Nome: %s\nIdade: %d\nEndereco: %s, %d", a.nome, a.idade, a.endereco, a.n);

    return 0;
}