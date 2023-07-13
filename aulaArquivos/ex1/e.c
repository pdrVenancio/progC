#include<stdio.h>
#include<stdlib.h>
#include<time.h>


int main()
{
	int i, n;
	FILE *arq =NULL;
	
	arq = fopen("saida.txt","wb");
	
	srand(time(NULL));
	
	for(i = 0; i < 100; i++)
	{
		n = rand() % 1000;
		
		fwrite(&n, sizeof(int), 1, arq);
	}
	
	fclose(arq);
	return 0;
}
