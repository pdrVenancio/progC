#include<stdio.h>
#include<math.h>

int main()
{
    int n;
    float res;
    
    printf("digite um número\n");
    scanf("%d", &n);
    
    if(n >= 0){
        res = sqrt(n);
        printf("%.2f\n", res);
        
    }else{
        res= n*n;
        printf("%.2f\n", res);
    }
        
    return 0;
    
}
