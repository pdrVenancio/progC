#include<stdio.h>

int main()
{
	int n;
	
	printf("Digite um numero para ver a contagem regressiva:\n");
	scanf("%d", &n);
	
	for(n; n >= 1; n--)
	{
		printf("%d ", n);
	}
	
	return 0;
}
