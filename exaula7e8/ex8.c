#include <stdio.h>

int main()
{
	int x[8], y[8];
	int s = 0, p = 0, d;
	int i, j;
	
	for(i = 0; i < 8; i++) {
		scanf("%d", &x[i]);
	}
	for(j = 0; j < 8; j++) {
		scanf("%d", &y[j]);
	}
	
	for(i = 0; i < 8; i++) {
		for(j = 0; j < 8; j++) {
			if(i == j){
			s = x[i] + y[j];
			printf("%d ", s);
			}
		}
	}
	printf("\n");
	
	for(i = 0; i < 8; i++) {
		for(j = 0; j < 8; j++) {
			if(i == j)
			{
				p = x[i] * y[j];
				printf("%d ", p);
			}
		}
	}
	printf("\n");
	
	for(i = 0; i < 8; i++) {
		for(j = 0; j < 8; j++) {
			if(x[i] == y[j])
				printf("%d ", x[i]);
		}
	}
	printf("\n");
	
for(i = 0; i < 8; i++) {
    	d = 0;
		for(j = 0; j < 8; j++) {
		
				if(x[i] == y[j])
				{
					d = 1;
				}
				
		}
		if(d == 0){
		  printf("%d ", x[i]); 
		}
	}
	
	return 0;
}
