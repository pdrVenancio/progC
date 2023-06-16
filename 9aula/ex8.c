#include <stdio.h>

int main()
{
	char f[99];
	int i, j, k;
	
	fgets(f, 99, stdin);
	scanf("%d %d", &i, &j);

	 for (k = i; k <= j; k++)
        printf("%c", f[k]);
  

	return 0;
}
