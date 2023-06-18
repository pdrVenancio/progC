
#include<stdio.h>

struct aluno
{
    char nome[50];
    int num;
    char curs[99];

};
int main()
{
    struct aluno p[5];
    int i;

    for ( i = 0; i < 5; i++)
    {
        scanf("%[^\n]%*c", p[i].nome);
        scanf("%d%*c", &p[i].num);  
        scanf("%[^\n]%*c",p[i].curs);
    }
    
    for ( i = 0; i < 5; i++)
    {
        printf("Aluno %d:\nNome: %s\nMatricula: %d\nCurso: %s\n\n", i + 1,  p[i].nome, p[i].num, p[i].curs);
    }
    
    return 0;
}