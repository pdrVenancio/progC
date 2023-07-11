#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    char *frase = NULL;
    int i, tam;

    frase = (char*)malloc(80 * sizeof(char));

    scanf("%[^\n]", frase);

    tam = strlen(frase);

    for ( i = tam - 1; i >= 0; i--)
    {
        printf("%c", toupper(*(frase + i)));
    }

    free(frase);

    return 0;
}