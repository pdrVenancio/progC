#include <stdio.h>
#include <string.h>

struct pss
{
    char nome[100], tel[20];
};

int main()
{
    struct pss p[5];
    struct pss age;
    int i, j, idx = 0;
 
    for ( i = 0; i < 5; i++)
        scanf(" %[^\n] %[^\n]", p[i].nome,  p[i].tel);

    for ( i = 0; i < 5 ; i++)
    {
        idx = i;
        for ( j = i + 1; j < 5; j++)
        {
            if(strcmp(p[j].nome, p[idx].nome) < 0){
                idx = j;
            }
            if (idx != i)
            {
                age = p[i];
                p[i] = p[idx];
                p[idx] = age;

            }
        }     
    }
       
    for ( i = 0; i < 5; i++)
        printf("%s %s \n", p[i].nome, p[i].tel);
    
    return 0;
}
