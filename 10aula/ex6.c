#include <stdio.h>

struct carro
{
    char marca[99];
    float p;
    int ano;
};

int main()
{
    struct carro c[8];
    int i;
    float preco;

    for ( i = 0; i < 8; i++)
    {
        scanf("%[^\n] %f %i%*c", c[i].marca, &c[i].p, &c[i].ano);
    }
    
    scanf("%f", &preco);

    while (preco >= 0)
    {
        printf("Carros mais baratos que %.2f:\n", preco);

        for ( i = 0; i < 8; i++)
        {
        
            if(c[i].p < preco)
                printf("%s %.2f %d\n", c[i].marca, c[i].p, c[i].ano);
        }
        scanf("%f", &preco);
        printf("\n");
    }
    return 0;
}