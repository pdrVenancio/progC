#include<stdio.h>

struct ponto
{
    int x, y;
};

int dtrRetangulo(struct ponto p, struct ponto v1, struct ponto v2)
{
    if (p.x > v1.x && p.x < v2.x && p.y > v1.y && p.y < v2.y)
        return 1;
    else
        return 0;
}

int main(){

    struct ponto v2, v1, p;

    scanf("%d %d", &p.x, &p.y);
    scanf("%d %d", &v1.x, &v1.y);
    scanf("%d %d", &v2.x, &v2.y);
    

    int resultado = dtrRetangulo(p, v1, v2);
   
    if (resultado == 0)
        printf("0");
    else
        printf("1");

    return 0;
}
