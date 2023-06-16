#include<stdio.h>

int main()
{
	int a[8];
	int x, y, i, s;
	
	for(i = 0; i < 8; i++)
	{
		scanf(" %d", &a[i]);
	}
	do{
	    
		scanf(" %d %d ", &x, &y);
		
	}while(x < 0 || x >= 8 || y < 0 || y >= 8);
	
	s = a[x] + a[y];
	
	printf("%d", s);
		
	return 0;
}
