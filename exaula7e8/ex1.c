#include<stdio.h>

int main()
{
	char a[8];
	int i;
	
	for(i = 0; i < 8; i++)
	{
		scanf(" %c", &a[i]);
	}
	for( i = 7; i >= 0; i--)
	{
		printf("%c ", a[i]);
	}

	return 0;
}
