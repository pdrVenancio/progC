#include <stdio.h>
#include <ctype.h>

int main()
{
	char c[99];
	int j, a = 0 , e = 0, i = 0, o = 0, u = 0;
	
	fgets(c, 99 ,stdin);
	
	for( j = 0; c[j] != '\0'; j++)
		c[j] = tolower(c[j]);
	
	j = 0;
	
	while(c[j] != '\0')
	{
		if(c[j] == 'a')  
			a++;
		else if(c[j] == 'e')
			e++;
		else if(c[j] == 'i')
			i++;
		else if(c[j] == 'o')
			o++;
		else if(c[j] == 'u')
			u++;
			
		j++;
	}
	
	printf("A = %d\nE = %d\nI = %d\nO = %d\nU = %d ", a, e, i, o, u);

	return 0;
}
