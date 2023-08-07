#include<stdio.h>
#include<stdlib.h>

int main()
{
	char nome[50], dn[11];
	int d, m, a, ida, ano;
	
	printf("ano atual: ");
	scanf("%d", &ano);
	
	FILE *arq = NULL;
	FILE *arqs = NULL;
	
	arq = fopen("bd.txt","r");
	arqs = fopen("saida.txt","w");
	
	fscanf(arq,"%[^\t] %[^\n]",nome, dn);
	
	while(!feof(arq))
	{
		sscanf(dn,"%d/%d/%d", &d, &m, &a);
		ida = ano - a;
		fprintf(arqs,"%s --- %d",nome, ida);
		
		fscanf(arq,"%[^\t] %[^\n]",nome, dn);
		
	}
	
	fclose(arqs);
	fclose(arq);

	return 0;
}
