#include <stdio.h>
#include <stdlib.h>

int main(){

    int* a = NULL;
    int* b = NULL;

    a = (int*)malloc(sizeof(int));
    b = (int*)malloc(sizeof(int));

    scanf("%d %d", a, b);

    if (a == NULL || b == NULL)
    {
        printf("falha na alocação de memoria...\n");
        exit(1);
    }

    if( *a > *b)
        printf("%d\n", *a);
    else
        printf("%d\n", *b);

    free(a);
    free(b);

    return 0;
}