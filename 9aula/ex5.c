#include <stdio.h>
#include <ctype.h>

int main()
{
	char c[99], r[99];
	int i;
	
	fgets(c, 99 ,stdin);
	
	i = 0;
	
	while( c[i] != '\0')
	{
		if(c[i] != ' ')
		{
			r[i] = c[i];
			printf("%c", r[i]);
		}
		i++;
	}


	return 0;
}
