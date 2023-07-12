#include <stdio.h>
#include <stdlib.h>

int main() {
    int m, n, i, j, ma, me;

    scanf("%d %d", &m, &n);

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

    ma = me = *(mat[0] + 0);

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            if (*(mat[i] + j) > ma)
                ma = *(mat[i] + j);
            if (*(mat[i] + j) < me)
                me = *(mat[i] + j);
        }
    }

    printf("Maior: %d\nMenor: %d\n", ma, me);

    for (i = 0; i < m; i++) {
        free(mat[i]);
    }

    free(mat);

    return 0;
}
