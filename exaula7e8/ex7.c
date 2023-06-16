#include <stdio.h>

int main()
{
	int v[15], vs[15];
	int i, j, a = 0;
	
	//apostado
	for(i = 0; i < 15; i++)
	{
		scanf("%d", &v[i]);
	}
	
	//sorteio
	for(j = 0; j < 15; j++)
	{
		scanf("%d", &vs[j]);
	}
	
	//acertos
	for(i = 0; i < 15; i++)
		for(j = 0; j < 15; j++)
			if(v[i] == vs[j])
				a++;
	printf("%d",a);

	return 0;
}
