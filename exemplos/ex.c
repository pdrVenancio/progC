#include<stdio.h>
#include<time.h>
#include<stdlib.h>

#define M 3
#define N 3
int main()
{
	int mat[M][N];
	int i, j, v, n[15];
	
	
	srand(time(NULL));
	
	for(i = 0; i < M; i++)
	{
		for(j = 0; j < N; j++)
		{
			mat[i][j] = rand() % 75;
		}	
		printf("\n");
	}
	
	for(v = 0; v < 15; v++)
	{
		n[v]= rand() % 75 ;
	}
	
	printf("Cartela \n");	
	for(i = 0; i < M; i++)
	{
		for(j = 0; j < N; j++)
		{
			printf("%5d", mat[i][j]);
		}	
		printf("\n");
	}
	
	printf("Sorteio \n");
	for(v = 0; v < 15; v++)
	{
		printf("%d ", n[v]);
	}
	
	printf("\n Sorteados \n");
	for(i = 0; i < M; i++)
	{
		for(j = 0; j < N; j++)
		{
			for(v = 0; v < 15; v++)
				if(mat[i][j] == n[v])
				{
					 printf("%d ",n[v]);
					 
				}
		}	
	}
printf("\n");	
	

	return 0;
}
