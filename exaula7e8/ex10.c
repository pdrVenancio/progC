#include<stdio.h>

int main()
{
	int m[4][4];
	int i, j, s =0;
	
	for(i=0 ; i<4 ; i++)
		for(j=0 ; j<4 ; j++)
			scanf("%d", &m[i][j]);
	
	for(i=0 ; i<4 ; i++)
		for(j=0 ; j<4 ; j++)
			if(m[i][j] > 10)
				s++
	
	printf("%d", s);
	
	return 0;
}
