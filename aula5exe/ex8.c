#include<stdio.h>

int main()
{
	int n;
    
   printf("Digite um valor para ver se ele é multiplo de 11\n");
   scanf("%d", &n);
   
   if(n % 11 == 0){
		printf("Sim\n");
		
	}else
		printf("Nao\n");
	  
   return 0;  
}


