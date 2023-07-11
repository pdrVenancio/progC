#include<stdio.h>
#include<stdlib.h>

int main(){

    int i, j, temp;
    int *pon = NULL;

    pon = (int*)malloc(5 * sizeof(int));

    for ( i = 0; i < 5; i++)
    {
        scanf("%d", pon+i);
    }
    
    for ( i = 0; i < 5; i++)
    {
        for (j = i + 1; j < 5; j++) {
            if ( *(pon + i) > *(pon + (j)))
            {
                temp = *(pon + i);
                *(pon + i) = *(pon + (j));
                *(pon + (j)) = temp;
            }
        }
    }

    for ( i = 0; i < 5; i++)
    {
        printf("%d ", *(pon + i));
    }

    free(pon);
    
    return 0;
}