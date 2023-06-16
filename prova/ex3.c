#include<stdio.h>

#define N 8

int main()
{
   float v[N];
   int i;
   int op = 0, pp = 0, bp = 0;
   float o , p, b ,m = 0;
   
   for( i = 0; i < N; i++)
   	scanf("%f", &v[i]);
   	
   for( i = 0; i < N; i++)
   	if( v[i] > m)
   		m = v[i];
   
   //OURO
   o = m + 1;	
   for( i = 0; i < N; i++)
   	if(v[i] < o)
   	{
   		o = v[i];
   		op = i;
   	}
   //PRATA
   p = m + 1;
   for( i = 0; i < N; i++)
   	if(v[i] < p && i != op)
   	{
   		p = v[i];
   		pp = i;
   	}
   //BRONZE
   b = m + 1;
   for( i = 0; i < N; i++)
   	if(v[i] < b && i != op && i != pp )
   	{
   		b = v[i];
   		bp = i;
   	}
   
   printf("%f %d\n%f %d\n%f %d", o, op, p, pp, b, bp);
   
   return 0;
} 
