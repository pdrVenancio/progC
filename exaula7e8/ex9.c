#include <stdio.h>

int main()
{
	int v[8];
	int i, j;
	int s = 0;
	
	for(i=0 ; i<8 ; i++)
		scanf("%d", &v[i]);
	
	for(i=0 ; i<8 ; i++)
	{
	    s = 1;
		for(j=2 ; j <= v[i] / 2; j++)
		{
			if(v[i] % j == 0){
		        s = 0;
			}
			
		}
		if(s == 1 && v[i] > 1)
			printf("%d ",v[i]);
	}
	

	return 0;
}
