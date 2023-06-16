#include<stdio.h>

int main()
{

	float a, b, c;
	
	printf("Digite os lados do triangulo para saber o tipo:\n");
	scanf("%f %f %f", &a, &b ,&c);
	
	if(a == b && b == c){
		printf("equilatero\n");
		
	}else if(a == b || b == c || c==a){
		printf("isosceles\n");
		
	}else
		printf("escaleno\n");
		
	return 0;
}
