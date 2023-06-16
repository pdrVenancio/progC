#include<stdio.h>

int main()
{
	float d, x1, x2, x3;

	printf("Digite o diametro da bola e as dimencoes da caixa:\n");
	scanf("%f %f %f %f", &d, &x1 , &x2, &x3);
	
	if(d <= x1 && d <= x2 && d <= x3){
		printf("sim\n");
        
	}else
		printf("nao\n");
	
	return 0;
}						
