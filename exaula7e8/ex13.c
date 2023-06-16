#include <stdio.h>

int main()
{
	int m, n, maior, sm, l = 0, c = 0;
	int i, j;
	
	scanf("%d %d", &m, &n);
	
	int mat[m][n];
	
	for( i=0; i < m; i++)
		for( j=0; j < n; j++)
			scanf("%d", &mat[i][j]);
	
	maior = 0;
	
	for( i = 0; i < m; i++)
		for(j = 0; j < n; j++)
			if(mat[i][j] > maior)
			{
				maior = mat[i][j];
			}
	
	sm = 0;
	
	for( i = 0; i < m; i++)
		for(j = 0; j < n; j++)
			if(mat[i][j] > sm && mat[i][j] != maior)
			{
				sm = mat[i][j];
				l = i;
				c = j;
			}
	
	printf("%d %d %d", sm, l, c);
	
	
	return 0;
}
