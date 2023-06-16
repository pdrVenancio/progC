#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    
    printf("digite um número\n");
    scanf("%d", &n);
    
    
    if(n % 2 == 0){
        printf("par\n");
        
    }else
        printf("ímpar\n");

    return 0;
    
}
