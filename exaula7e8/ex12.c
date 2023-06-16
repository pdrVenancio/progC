#include <stdio.h>

int main()
{
	int m, n, maior, l = 0, c = 0;
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
				l = i;
				c = j;
			}
	
	printf("%d %d %d", maior, l, c);
	
	
	return 0;
}
