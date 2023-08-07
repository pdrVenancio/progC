#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main()
{
	int i, n, s= 0;
	FILE *arq =NULL;
	
	arq = fopen("saida.txt","rb");

	fread(&n, sizeof(int), 1,arq);
	
	for(i = 0; i < 100;i++)
	{
		
		s	+= n;
		fread(&n, sizeof(int), 1,arq);
	
	}
	
	printf("%d\n", s);
	
	fclose(arq);
	return 0;
}
