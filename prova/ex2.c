#include <stdio.h>

int main()
{
	float s = 0, d = 1, den = 1;
	int i, n;
	int sin = 1;
	
	do
	{
		scanf("%d", &n);
		
	}while( n <= 0);
	
	for(i = 0; i < n; i++)
		{
			s += ( 1 / den ) * sin;
			d += 2;
			den = d * d;
			sin *= - 1;
		}
		
		printf("%.4f", s); 

	return 0;
}
