#include<stdio.h>
int main()
{
	float valCobradoA, valCobradoB, dias, kmRodado;
	
	printf("Digite o numero de dias e os km rodados:\n");
	scanf("%f %f", &dias, &kmRodado);
	
	valCobradoA = 62 * dias + 1.4 * kmRodado;
	valCobradoB = 80 * dias + 1.2 * kmRodado;
	
	printf(" %.2f   %.2f \n", valCobradoA, valCobradoB); 

	return 0;
}
