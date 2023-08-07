#include<stdio.h>
#include<stdlib.h>

typedef struct atleta{
	char nome[40], esporte[40];
	int i;
	float h;
	
}atleta;

int main()
{
	atleta a[5];
	
	FILE *arq = NULL;
	
	arq = fopen("bd.txt","wb");
	
	for(int i = 0; i < 5; i++)
	{
		printf("digite o nome: ");
		scanf(" %[^\n]", a->nome);
		printf("digite o esporte: ");
		scanf(" %[^\n]", a->esporte);
		printf("digite a idade: ");
		scanf(" %d", &a->i);
		printf("digite o seu tamanho: ");
		scanf(" %f", &a->h);
		
		fwrite(&a, sizeof(atleta), 1, arq);
	
	}
	
	
	fclose(arq);
	
	return 0;
}
