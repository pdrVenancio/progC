#include <stdio.h>
#include <string.h>

int main()
{
	char c[99], r[99];
	int i, j, t; 
	
	fgets(c, 99, stdin);
	
	t = strlen(c);
	
	for( i = 0, j = t - 2; i < t - 1;i++, j--)
			r[i] = c[j];

	r[i] = '\0'; 
 
 	printf("%s", r);

	return 0;
}
