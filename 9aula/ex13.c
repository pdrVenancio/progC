#include <stdio.h>
#include <stdlib.h>

int main() {
    char num1[20], num2[20], num3[20], num4[20], somas[99];
    int soma, n1, n2, n3, n4;

    fgets(num1, 20 , stdin);
    fgets(num2, 20 , stdin);
    fgets(num3, 20 , stdin);
    fgets(num4, 20 , stdin);

    n1 = atoi(num1);
    n2 = atoi(num2);
    n3 = atoi(num3);
    n4 = atoi(num4);

    soma = n1 + n2 + n3 + n4;

    sprintf(somas, "%d", soma);
    
    printf("%s", somas);

    return 0;
}
