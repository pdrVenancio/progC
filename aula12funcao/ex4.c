#include <stdio.h>
int quadrados(int n){
    int i, s = 0;

    for ( i = 1; i <= n; i++)
    {
        s = s + i * i;
    }
    return(s);
}
int main(){
    int  n;

    scanf("%d", &n);

    quadrados(n);

    return 0;
}