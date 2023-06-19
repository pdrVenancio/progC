#include <stdio.h>
#include <math.h>

struct coor
{
    float raio, a;
};

int main()
{
    struct coor n[6];
    int i;
    float x[6], y[6];

    for ( i = 0; i < 6; i++)
        scanf("%f %f", &n[i].raio ,&n[i].a);

    for ( i = 0; i < 6; i++)
        n[i].a = n[i].a * (acos(-1) / 180.0);

    for ( i = 0; i < 6; i++)
    {
        x[i] = n[i].raio * cos(n[i].a);
        y[i] = n[i].raio * sin(n[i].a);
    }

    for ( i = 0; i < 6; i++)
        printf("(%.2f, %.2f)\n",x[i], y[i]);
  
    return 0;
}