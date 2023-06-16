#include<stdio.h>

int main()
{
	int a, b, c;
	
	scanf("%d %d %d", &a, &b, &c);
	
	if(a < 90 && b < 90 && c < 90)
	{
		printf("acutangulo");
	}else if(a == 90 || b == 90 || c == 90)
	{
		printf("retangulo");		
	}else if(a > 90 || b > 90 || c > 90)
		printf("obtusangulo");		
		

	return 0;
}
