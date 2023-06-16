#include<stdio.h>

int main()
{
	int m[4][4];
	int i, j, p =0 , im = 0;
	
	for(i=0 ; i<4 ; i++)
		for(j=0 ; j<4 ; j++)
			scanf("%d", &m[i][j]);
	
	for(i=0 ; i<4 ; i++)
		for(j=0 ; j<4 ; j++)
			if(m[i][j] % 2 == 0)
				p++
			else
				im++
	
	printf("%d %d", p, im);
	
	return 0;
}
