#include<stdio.h>
#include<math.h>

int main()
{
    float n1, n2, m;
    
    printf("Digite as duas notas\n");
    scanf("%f %f", &n1, &n2);
    
    if(n1 <= 10 && n1 >= 0 && n2 <= 10 && n2 >= 0){
        m = (n1 + n2)/2;
        printf("média %.2f",m);
        
    }else
        printf("notas inválidas \n");
    
    return 0;  
}
