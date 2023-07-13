#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct atleta{
	char nome[40], esporte[40];
	int i;
	float h;
	
}atleta;

int main()
{
	atleta a[5];
	int mv = 0;
	float mh = 0;
	char mvc[50], mhc[50];
	
	FILE *arq = NULL;
	
	arq = fopen("bd.txt","rb");
	
	fread(a, sizeof(atleta), 1, arq);
	
	for(int i = 0; i < 5; i++)
	{
		if(mv < a->i)
		{
			mv = a->i;
			strcpy(mvc, a->nome);
		}
		if(mh < a->h)
		{
			mh = a->h;
			strcpy(mhc, a->nome);
		}
		
		fread(a, sizeof(atleta), 1, arq);
	}
	printf("mais alto: %s %f\nMais velho: %s %d\n", mhc, mh, mvc, mv);
	
	fclose(arq);
	
	return 0;
}
