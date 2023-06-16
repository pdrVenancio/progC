#include<stdio.h>

int main()
{
	int v[10];
	int x, i;
	
	for(i = 0; i < 10; i++)
	{
		scanf("%d", &v[i]);
	}
	
	scanf("%d", &x);
	
	for(i = 0; i < 10; i++)
	{
		if(v[i] % x == 0)
			printf("%d ", v[i]);
	}
	
	
	return 0;
}
