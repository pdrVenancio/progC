#include <stdio.h>

int main()
{
	int n, sl = 0, sc = 0, slt = 0, sdp = 0, sds = 0;//slt = soma primeira linha teste
	int i, j;
	
	scanf("%d", &n);
	
	int mat[n][n];
	
	for(i = 0; i < n; i++)
		for(j = 0; j < n; j++)
			scanf("%d", &mat[i][j]);
				//LINHA
	for(i = 0; i < n; i++)
	{
	   sl = 0;
		for(j = 0; j < n; j++)
			sl += mat[i][j];
		if(i == 0)
			slt = sl;
		if(sl != slt)
			{
				printf("nao");
				return 0; 
			}  
	}	
				//COLUNA
	for(j = 0; i < n; j++)
	{
	   sc = 0;
		for(i = 0; i < n; i++)
			sc += mat[i][j];
		
		if(sc != slt)
		{
			printf("nao");
			return 0;
		}
	}
		
				//DIAGONAIS
	for(i = 0; i < n; i++)
	{
		sdp += mat[i][i];
		sds += mat[i][n - 1 - i];
	}
		
	if(sl == slt && slt == sdp && sdp == sds)
		printf("sim");
	else
		printf("nao");
		
	return 0;
}
