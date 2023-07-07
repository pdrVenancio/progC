#include<stdio.h>

void exibirData(char data[]){

    int d, m, a;

    sscanf(data, "%d/%d/%d" , &d, &m, &a);

    char* mes[] = {"janeiro", "fevereiro", "marco", "abril", "maio", "junho", "julho", "agosto", "setembro", "outubro", "novembro", "dezembro"};

    if(d < 1 || d > 31 || m < 1 || m > 12)
    {
        printf("data invalida");
        return;
    }

    printf("%d de %s de %d", d, mes[m - 1], a);
}
int main(){

    char data[30];

    scanf("%s", data);

    exibirData(data);

    return 0;
}
