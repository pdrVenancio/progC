#include <stdio.h>
#include <ctype.h>

int main()
{
	char c[99];
	int i, vog;
	
	fgets(c, 99 ,stdin);
	
	for( i = 0; c[i] != '\0'; i++)
		c[i] = tolower(c[i]);
	
	i = 0;
	vog = 0;
	
	while( c[i] != '\0')
	{
		if(c[i] == 'a' || c[i] == 'e' || c[i] == 'i' || c[i] == 'o' || c[i] == 'u')
			vog++;
		i++;
	}
	
	printf("%d", vog);

	

	return 0;
}
