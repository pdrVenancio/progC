#include<stdio.h>

int main()
{
	float real, cotDollar, dollar;
	
	printf("Digite o valor em reais, em seguida a cotacao do dollar\n");
	scanf("%f %f", &real, &cotDollar);
	
	dollar = real * cotDollar;
	
	printf("O valor em dollar: %0.2f US$\n", dollar);
	
	return 0;
}
