#include<stdio.h>

int main()
{
	int v[12];
	int i, sp = 0, si = 0;
	
	for(i = 0; i < 12; i++)
	{
		scanf("%d", &v[i]);
	}
	
	for(i = 0; i < 12; i++)
	{
		if(v[i] % 2 == 0)
			sp++;
		else
			si++;
	}
	
	printf("%d %d", sp, si);

	return 0;
}
