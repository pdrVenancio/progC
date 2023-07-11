#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m, i, j, elem, ex;

    scanf("%d %d", &m, &n);

    int *pon = NULL, *pom = NULL;

    pon = (int *)malloc(n * sizeof(int));
    pom = (int *)malloc(m * sizeof(int));

    printf("N:\n");
    for (i = 0; i < n; i++) {
        scanf("%d", pon + i);
    }

    printf("M:\n");
    for (i = 0; i < m; i++) {
        scanf("%d", pom + i);
    }

    printf("\nInterseccao: ");
    for (j = 0; j < n; j++) {
        for (i = 0; i < m; i++) {
            if (*(pon + j) == *(pom + i)) {
                printf("%d ", *(pom + i));
            }
        }
    }

    printf("\nDiferenca: ");
    for (j = 0; j < n; j++) {
        elem = *(pon + j);
        ex = 1;
        for (i = 0; i < m; i++) {
            if (elem == *(pom + i)) {
                ex = 0;
                break;
            }
        }
        if (ex == 1) {
            printf("%d ", elem);
        }
    }

    printf("\nUniao: ");

    
    for (j = 0; j < m; j++) {
        printf("%d ", *(pom + j));
    }

    for (j = 0; j < n; j++) {
        elem = *(pon + j);
        ex = 0;
        for (i = 0; i < m; i++) {
            if (elem == *(pom + i)) {
                ex = 1;
                break;
            }
        }
        if (ex == 0) {
            printf("%d ", elem);
        }
    }


    free(pom);
    free(pon);

    return 0;
}
