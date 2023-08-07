#include<stdio.h>
#include<stdlib.h>

int main()
{
	char nome[50], dnt[11];
	int cont = 0;
	
	FILE *arq = NULL;
	
	arq = fopen("bd.txt","w");
	
	while(cont == 0)
	{
		printf("Nome: ");
		scanf(" %[^\n]", nome);
		printf("data: ");
		scanf(" %[^\n]", dnt);
		
		fprintf(arq,"%s\t%s\n",nome,dnt);
		
		printf("0 continua\n1 para\nOpcao: ");
		scanf(" %d", &cont);
	}
	
	fclose(arq);
	
	return 0;
}
