#include<stdio.h>

int main()
{
	int n;
	
	printf("Digite um numero:\n");
	scanf("%d", &n);
	
	if(n % 3 == 0 && n % 5 == 0){
		printf("nao divisivel\n");
				
	}else if(n % 3 == 0){
		printf("divisivel por 3\n");
		
	}else if(n % 5 == 0){
		printf("divisivel por 5\n");
		
	}else
		printf("nao divisivel\n");
				
	return 0;
}						
