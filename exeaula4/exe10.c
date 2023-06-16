#include<stdio.h>

int main()
{
	int n, temp, s, m, h;
	
	printf("Digite o numero de peças:\n");
	scanf("%d", &n);
	
	temp = n * 17;
	h = temp / 3600;
  	m = (temp % 3600) / 60;
   s = temp % 60;
		
	printf("%d %d %d \n", h, m, s);
	
	return 0;
}
