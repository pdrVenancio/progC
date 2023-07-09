#include <stdio.h>
#include <string.h>

int main(){

    char a[99], b[99];

    scanf("%[^\n] %[^\n]", a, b);

    afomb(a, b);

    return 0;
}

int afimb(char *a, char *b)
{
    int len_a = strlen(a);
    int len_b = strlen(b);
    int dif, i;

    if (len_a > len_b) {
        return 0; 
    }

    dif = len_b - len_a;

    for ( i = 0; i < len_a; i++) {
        if (a[i] != b[dif + i]) {
            return 0; 
        }
    }

    return 1;
}