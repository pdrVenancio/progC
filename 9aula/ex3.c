#include <stdio.h>
#include <ctype.h>

int main()
{
	char c[99];
	int i, space;
	
	fgets(c, 99 ,stdin);
	
	i = 0;
	space = 0;
	
	while( c[i] != '\0')
	{
		if(c[i] == ' ')
			space++;
		i++;
	}
	
	printf("%d", space);

	return 0;
}
