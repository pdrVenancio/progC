#include <stdio.h>
#include <string.h>

int main()
{
	char f1[99], f2[99];
	int tf1, tf2;
	
	fgets(f1, 99, stdin);
	fgets(f2, 99, stdin);
	
	tf1 = strlen(f1); 
	tf2 = strlen(f2);
	
	if( tf1 > tf2)
		printf("A frase 1 possui %d caracteres a mais que a frase 2.", tf1 - tf2);
	else if( tf2 > tf1)
		printf("A frase 1 possui %d caracteres a menos que a frase 2.", tf2 - tf1);
		
	return 0;
}
