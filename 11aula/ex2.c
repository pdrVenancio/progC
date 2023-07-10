#include<stdio.h>
#include<stdlib.h>

int main(){

    int *a = NULL, *b = NULL;

    a = (int*)malloc(sizeof(int));
    b = (int*)malloc(sizeof(int));

    scanf("%d %d", a, b);

    if(&a > &b){
        printf("A: %d - %p\n", *a, &a);
        printf("B: %d - %p\n", *b, &b);
    }
        
    else{
        printf("B: %d - %p\n", *b, &b);
        printf("A: %d - %p\n", *a, &a);
    }
    free(a);
    free(b);

    return 0;
}