#include<stdio.h>

int main()
{
	float peso, qntGotas;
	
	printf("informe o peso da criança (em kg)\n");
	scanf("%f", &peso);
	
	qntGotas = (peso/2)* 5;
	
	printf("Quantidade de gotas: %.0f \n", qntGotas);
	
	return 0;
}
