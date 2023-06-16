#include<stdio.h>

int main()
{
	int n;
    
   printf("Digite um ano para ver se é bissexto:\n");
   scanf("%d", &n);
   
   if(n % 4 == 0 || n % 400 == 0 && n % 100 != 0){
		printf("Sim\n");
		
	}else
		printf("Nao\n");
	  
   return 0;   
}

