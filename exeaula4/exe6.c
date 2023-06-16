#include<stdio.h>
#include<math.h>
 
int main()
{
	float a, b, c, p, area;
	
	printf("Informe os ladosdos do triangilo:\n");
	scanf("%f %f %f", &a, &b, &c);
	
	p = (a + b + c) / 2.0;
  	area = sqrt(p * (p - a) * (p - b) * (p - c));

	printf("A medida da area e: %.1f \n", area);
	
	return 0;
}
