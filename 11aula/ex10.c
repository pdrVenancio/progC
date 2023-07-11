#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n, i;

    scanf("%d", &n);

    double *pon = NULL, m = 0, diff1, diff2;
    int *ponInt = NULL, indx = 0;

    pon = (double*)malloc(n * sizeof(double));

    for ( i = 0; i < n; i++)
    {
        scanf("%lf", pon+i);
    }

    double pMedia = *pon;
    
    for ( i = 0; i < n; i++)
    {
        m += *(pon+i);
    }
    
    m = m / n;

    for ( i = 0; i < n; i++)
    {
        diff1 = *(pon+i) - m;
        if (diff1 < 0) 
            diff1 = -diff1;

        diff2 = pMedia - m;
        if (diff2 < 0) 
            diff2 = -diff2;
            
        if (diff1 < diff2) {
            pMedia = *(pon+i);
            indx = i;
    }
    
    printf(" m = %lf ind =%d pmedia = %lf", m, indx, pMedia);

    free(pon);

    return 0;
}