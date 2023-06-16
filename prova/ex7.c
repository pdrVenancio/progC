#include <stdio.h>

int main()
{
	int v[5];
	int i, j, p;
	int n;
	
	i = 0; 
	
	while(i < 5)
	{
		scanf("%d", &n);
		p = 0;
		
		for(j = 1; j <= n; j++)
		{
			if( n % j == 0)
				p++;
		}
		if( p == 2)
		{
			v[i] = n;
			i++;
		}
	}
	
	for(i = 0; i < 5; i++)
		printf("%d ",v[i]);

	return 0;
}
