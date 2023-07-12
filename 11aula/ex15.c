#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n, i, j, num, con = 1;
    scanf("%d %d", &n, &m);

    int **mat = NULL;

    mat = (int **)malloc(m * sizeof(int *));

    for (i = 0; i < m; i++) {
        mat[i] = (int *)malloc(n * sizeof(int));
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", *(mat + i) + j);
        }
    }

    scanf("%d", &num);

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (*(mat[i] + j) == num)
                con = 0;
        }
    }

    if (con == 0)
        printf("Contém o número %d na matriz\n", num);
    else
        printf("Não contém o número %d na matriz\n", num);

    // Liberar a memória alocada
    for (i = 0; i < m; i++) {
        free(mat[i]);
    }
    free(mat);

    return 0;
}
