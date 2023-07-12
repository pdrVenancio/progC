#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct aluno
{
    int mat;
    char nome[60];
    char dtn[20];
};

int main()
{
    int n, i;

    scanf("%d", &n);

    struct aluno *aln = (struct aluno *)malloc(n * sizeof(struct aluno));
    if (aln == NULL)
    {
        printf("Erro ao alocar memória\n");
        return 1;
    }

    for (i = 0; i < n; i++)
    {
        printf("Nome: ");
        scanf(" %[^\n]", (aln + i)->nome);
        printf("Data de Nascimento: ");
        scanf(" %[^\n]", (aln + i)->dtn);
        printf("Matricula: ");
        scanf("%d", &(aln + i)->mat);
    }

    int mv = 0, mn = 0;
    for (i = 0; i < n; i++)
    {
        if (strcmp((aln + i)->dtn, (aln + mv)->dtn) > 0)
            mv = i;
        if (strcmp((aln + i)->dtn, (aln + mn)->dtn) < 0)
            mn = i;
    }

    printf("Aluno mais velho: %s\n", (aln + mv)->nome);
    printf("Aluno mais novo: %s\n", (aln + mn)->nome);

    free(aln);

    return 0;
}
