#include <stdio.h>

long long int fatorial(int n)
{
    long long int fat = n;
    int i;

    for ( i = n; i >= 2; i--)
    {
        fat = fat * ( i - 1);
    }   
    
    return fat;
}

int somafat(int n)
{
    long long int fat = fatorial(n);
    int soma = 0, dig;


    while (fat != 0)
    {
        dig = fat % 10;
        soma += dig;
        fat /= 10;
    }
    
    return soma;
}

int main(){
    
    int n;

    scanf("%d", &n);

    fatorial(n);
    somafat(n);

    return 0;
}