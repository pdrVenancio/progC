#include<stdio.h>
#include <locale.h>

int main()
{
	float h, x;
	char s;
	
	printf("Digite a sua altura(em cm) e sexo (m/f):\n");
	scanf("%f %c", &h, &s);
	
	if(s == 'm'){
		if(h >= 1.75){
			printf("sim\n");
		}else
			printf("nao\n");
		
	}else if(s == 'f'){
		if (h >= 1.80) {
            printf("sim\n"); 
        } else
            printf("nao\n"); 
        
	}else
		printf("sexo invalido\n");
	
	return 0;
}						
