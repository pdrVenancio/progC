#include <stdio.h>

int main()
{
	long long int nf, pf, npf, c;
	int n , p, np;
	int i ;
	
	do{
		
		scanf("%d %d", &n, &p );
		
	}while( n < 0 || p < 0);
	
	nf = n;
	pf = p;
	np = n - p;
	npf = np;
	
	for( i = 1; i < n; i++)
		nf *= (n - i);
	
	for( i = 1; i < p; i++)
		pf *= (p - i);
		
	for( i = 1; i < np; i++)
		npf *= (np - i);
		
	c = nf / (pf * npf);
	
	printf("%lld ", c);
		
	return 0;
}
