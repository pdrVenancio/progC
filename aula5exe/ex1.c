#include<stdio.h>

int main()
{
    float a,b;
    printf("Digite dois números para ver o maior \n");
    scanf("%f %f", &a, &b);
    
    if(a > b){
        printf("o menor valor é %.2f", b);
    }else 
        printf("o menor número é %.2f", a);
    
    return 0;
}