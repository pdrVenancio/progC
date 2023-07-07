#include<stdio.h>
int soma(int n1, int n2)
{
    int s = 0, i;

    for ( i = n1; i <= n2; i++)
    {
            s+= i;
    }

    return(s);
}
int main(){

    int a, b;

    scanf("%d %d", &a, &b);
    soma(a, b);
    
    return 0;
}