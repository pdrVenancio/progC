#include<stdio.h>

int main()
{
    float n, n2, n3, n4;
    
    printf("Digite 4 números para ver o maior \n");
    scanf("%f %f %f %f", &n, &n2, &n3, &n4);
    
    if(n <= n2 && n <= n3 && n <= n4){
        printf("%.2f", n);
        
    }else if(n2 <= n && n2 <= n3 && n2 <= n4 ){
        printf("%.2f", n2);
        
    }else if(n3 <= n && n3 <= n2 && n3 <= n4 ){
        printf("%.2f", n3);
        
    }else 
        printf("%.2f",n4);

    return 0;
    
}
