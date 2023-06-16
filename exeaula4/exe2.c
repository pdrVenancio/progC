#include<stdio.h>

int main()
{
	float valProduto, valDescont, descont;
	
	printf("Digite o valor do produto e o desconto a ser aplicado\n");
	scanf("%f %f", &valProduto, &descont);
	
	valDescont = valProduto * (descont/100);
	valProduto = valProduto - valDescont;
	
	printf(" R$%0.2f   R$%0.2f\n", valProduto, valDescont); 
	
	return 0;
}
