#include<stdio.h>

int main()
{
	int i;
	
	printf("Digite o sua idade para ver sua categoria:\n");
	scanf("%d", &i);
	
	if(i >= 0){
		if(i >= 4){
			if(i >= 4 && i <=5){
				printf("fraudinha\n");
				
			}else if(i >= 6 && i <= 12){
				printf("infantil\n");
				
			}else if(i >= 13 && i <= 18){
				printf("juvenil\n");
				
			}else if(i > 18){
				printf("adulto\n");
				
			}
		}else
			printf("sem categoria\n");
			
	}else
		printf("idade invalida\n");

	return 0;
}						
