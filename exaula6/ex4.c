#include<stdio.h>

int main()
{
	int i, n , imp, s;
	
	do{
		
		printf("Digite a quantidade de numeros impares que deseja somar: \n");
		scanf("%d", &n);
	}while(n <0);
	imp = 1;
	s = 0;
	
	for( i = 1; i <= n ; i++ )
	{	
		s = s + imp;
		imp = imp + 2;
	
	}
	printf("%d \n", s);
	
	return 0;
}
