#include<stdio.h>

int main()
{
	int i, n , x;
	
	printf("Digite um valor(x) e um valor  valor maximo(n) para ver os multiplos de X ate N:\n");
	scanf("%d %d", &x, &n);
		
	for( i = 0; i <= n ; i++ )
	{
		if(i % x == 0 && i != 0)
			printf("%d ", i);	
	}
	
	return 0;
}
