#include<stdio.h>

int main()
{
	int i, n;
	
	printf("Digite ate que numero deseja contar:\n");
	scanf("%d", &n);
	
	for(i = 0; i <= n; i++)
	{
		printf("%d ", i);
	}
	
	return 0;
}
