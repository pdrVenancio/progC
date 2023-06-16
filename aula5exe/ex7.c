#include<stdio.h>

int main()
{
	float p;
	int e;
    
   printf("\n1 - MG\n2 - SP\n3 - RJ\n4 - ES\n\nDigite o numero referente ao estado:\n");
   scanf("%d", &e);
   
   printf("Digite o preço:\n");
   scanf("%f", &p);
    
   if(e == 1){
		p = p * 0.12 + p;	  
      printf("R$%.2f\n", p);
      
   }else if(e == 2){
		p = p * 0.07 + p;	  
      printf("R$%.2f\n", p);
      
	}else if(e == 3){
		p = p * 0.15 + p;	  
      printf("R$%.2f\n", p);
      
	}else if(e == 4){
		p = p * 0.08 + p;	  
      printf("R$%.2f\n", p);
      
	}else
		printf("codigo invalido\n");
	  
   return 0;  
}
