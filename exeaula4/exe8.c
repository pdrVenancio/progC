#include<stdio.h>
#include<math.h>

int main()
{
	float v, r, h;
	
	printf("Digite o valor do raio e a altura do cilindro (em cm):\n");
	scanf("%f %f", &r, &h);
	
	v = M_PI * (r * r) * h;
	
	printf("O volume do cilindro é: %.2f cm \n", v);
	
	return 0;
}
