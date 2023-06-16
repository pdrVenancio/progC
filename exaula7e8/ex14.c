#include<stdio.h>

int main()
{
	int mat[3][3];
	int i, j;
	int g = 0;
	
	for(i = 0; i < 3; i++)
		for(j = 0; j < 3; j++)
			scanf("%d", &mat[i][j]);
			
	for(i = 0; i < 3; i++)											
	{
		if(mat[i][0] == 1 && mat[i][1] == 1 && mat[i][2] == 1)
			g = 1;
	}
	for(j = 0; j < 3; j++)												//
	{
		if(mat[0][j] == 1 && mat[1][j] == 1 && mat[2][j] == 1)
			g = 1;
	}
	if((mat[0][0] == 1 && mat[1][1] == 1 && mat[2][2] == 1) ||
		(mat[2][0] == 1 && mat[1][1] == 1 && mat[0][2] == 1) )
			g = 1;
	
		//g == 0 - velha
		//g == 1 - vitoria
		
	if(g == 1)
		printf("sim");
	else
		printf("nao");

	return  0;
}
