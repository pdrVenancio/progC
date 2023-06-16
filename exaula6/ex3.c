#include<stdio.h>

int main()
{
	int i, n , imp;
	
	printf("Digite a quantidade de numeros impares que deseja mostrar: \n");
	scanf("%d", &n);
	
	imp = 1;
	
	for( i = 1; i <= n ; i++ )
	{
		printf("%d ", imp);
		imp = imp + 2;
		
	}
	
	return 0;
}
