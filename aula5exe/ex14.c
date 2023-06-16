#include<stdio.h>

int main()
{
	float h, x;
	char s;
	
	printf("Digite a sua altura e sexo (m/f):\n");
	scanf("%f %c", &h, &s);
	
	if(s == 'm'){
		x = (72.7 * h) - 58;
		printf("%.2f\n",x);
		
	}else if(s == 'f'){
		x = (62.1 * h) - 44.7;
		printf("%.2f\n",x);
		
	}else
		printf("sexo invalido\n");
	
	return 0;
}						
