#include <stdio.h>
#include <string.h>

int main()
{
	char c[99];
	int tam, i, n, a;
	
	fgets(c, 99, stdin);
	
	tam = strlen(c);
	
	i = 0;
	a = 0;
	n = 0;
	
	while(c[i] != '\0')
	{
		if(c[i] == 'a')
			a++;
		else if(c[i] != a)
			n++;
		i++;
	}
	
	tam--;
	n--;
	
	if(a > tam/2)
		printf("%d", tam);
	else
	{
		while(n >= a)
			n--;
			
		tam = a + n;
		printf("%d", tam);
	}
	return 0;
}

//HARMONICA == mais  da metade sao a
