#include<stdio.h>
#include<math.h>
 
int main()
{
	float n, sen, css, tng, rad;
	
	printf("Digite o valor do angulo:\n");
	scanf("%f", &n);
	
	rad = n * acos(-1) / 180;
	sen = sin(rad);
	css = cos(rad);
	tng = tan(rad);

	printf("%.2f %.2f %.2f \n",sen, css, tng);
	
	return 0;
}
