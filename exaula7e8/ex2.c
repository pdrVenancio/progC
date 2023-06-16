#include<stdio.h>

int main()
{
	float a[10], q[10];
	int i;
	
	for( i = 0; i < 10; i++)
	{
		scanf(" %f", &a[i]);
	}
	
	for(i = 0; i < 10; i++)
	{
		q[i] = a[i] * a[i];
		printf("%.0f \n", a[i]);
		printf("%.0f ", q[i]);
	}

	return 0;
}
