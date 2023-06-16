#include<stdio.h>
#include<math.h>

int main()
{
	float a, b, c, del, x1, x2;
    
   printf("Digite o valor de A B C:\n");
   scanf("%f %f %f", &a, &b, &c);
   
   del = b * b -4 * a * c;
   
  	if (del > 0) {
        x1 = (-b - sqrt(del)) / (2 * a);
        x2 = (-b + sqrt(del)) / (2 * a);
        printf("%.2f %.2f\n", x1, x2);
        
    } else if (del == 0) {
        x1 = -b / (2 * a);
        printf("%.2f\n", x1);
       
    } else {
        printf("Sem raizes reais\n");
    }
	  
   return 0;    
}

