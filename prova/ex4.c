#include <stdio.h>



int main() {
	
	int n , m , x, y;
	int i, j;
	
	scanf("%d %d", &n , &m);
	
	int mat[n][m];
	
	for(i = 0; i < n; i++)
		for(j = 0; j < m; j++)
			scanf("%d", &mat[i][j]);
	
	scanf("%d %d", &x , &y);
	
	int mat2[x][y];
	
	for(i = 0; i < x; i++)
		for(j = 0; j < y; j++)
			scanf("%d", &mat2[i][j]);
			
	if( x == n && y == m)
	{
		int mat3[x][y];
		
		for(i = 0; i < n; i++)
			{
				for( j = 0; j < m; j++)
				{
					mat3[i][j] = mat[i][j] + mat2[i][j]; 
				}
			}
			
		for(i = 0; i < x; i++)
			{
				for( j = 0; j < y; j++)
				{
					printf("%d ", mat3[i][j]); 
				}
				printf("\n");
			}
	}else
		printf("impossivel");
	
		
    return 0;
}
