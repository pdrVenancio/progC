#include<stdio.h>
#include<math.h>

int main()
{
	int n;
	float raizQuar, raizCu, soma;
	
	printf("digite um numero inteiro:\n");
	scanf("%d",&n);
	
	raizCu = cbrt(n);
	raizQuar = sqrt(sqrt(n));
	
	soma = raizQuar + raizCu;
	
	printf("A soma das raizes e:%.2f\n",soma);
	
	return 0;
}
