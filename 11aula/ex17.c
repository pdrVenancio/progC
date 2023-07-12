#include<stdio.h>
#include<stdlib.h>

int main()
{
    int m, n, i, j;

    scanf("%d %d", &m, &n);

    int **mat = NULL;

    mat = (int**)malloc(m * sizeof(int*));

    for (i = 0; i < m; i++)
    {
        mat[i] = (int*)malloc(n * sizeof(int));
    }
    
    for (i = 0; i < m; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", *(mat+i)+j);
        }
    }
    
    //  TRANSPOSTA

    int **mat2 = NULL;

    mat2 = (int**)malloc(n * sizeof(int*));

    for (i = 0; i < n; i++)
    {
        mat2[i] = (int*)malloc(m * sizeof(int));
    }
    
    //COPIANDO A TRANSPOSTA

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            *(mat2[i]+ j) = *(mat[j]+ i);
        }
    }
    
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", *(mat2[i]+j));
        }
        printf("\n");
    }
    
    for (i = 0; i < m; i++)
    {
        free(mat[i]);
    } 
    free(mat);

    for (i = 0; i < n; i++)
    {
        free(mat2[i]);
    }
    free(mat2);

    return 0;
}
