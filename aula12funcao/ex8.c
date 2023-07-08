#include <stdio.h>

int qtdprimos(int n)
{
    int num = 2, k = 0, i, contp = 0;

    while (num <= n)
    {
            k = 0;
            for ( i = 1; i <= num ; i++)
                if (num % i == 0)
                    k++;
           
            if(k <= 2)
                contp++;
           
            num++;
    }
    return(contp);

}


int main(){

    int n;

    scanf("%d", &n);

    qtdprimos(n);

    return 0;
}