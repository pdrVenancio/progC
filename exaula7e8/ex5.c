#include<stdio.h>

int main()
{
	int v[10];
	int i, ma , me , pme, pma;
	
	for(i = 0; i < 10; i++)
	{
		scanf("%d", &v[i]);
	}
	
	ma = v[0];
	me = v[0];
	pma = 0;
	pme = 0;
	
	for(i = 0; i < 10; i++)
	{
		if(v[i] > ma)
		{
			ma = v[i];
			pma = i;
		}
		else if(v[i] < me)
		{
			me = v[i];
			pme = i;
		}
	}
	
	printf("%d %d \n%d %d", ma, me, pma, pme);
	
	return 0;
}
