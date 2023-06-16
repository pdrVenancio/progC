#include <stdio.h>

int main()
{
	char f[99], c;
	int i, j, k = 0;
	
	fgets(f, 99, stdin);
	scanf(" %c %d", &c, &i);
	
	for(j = i; f[j] != '\0'; j++)
		if(c == f[j])	
		{
			printf("%d", j);
			k = 1;
			break;
		}
	
	if(k != 1)
		printf("-1");
		
	return 0;
}
