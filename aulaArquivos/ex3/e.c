#include<stdio.h>
#include<stdlib.h>
#include<string.h>

typedef struct livro
{
	char nome[50], autor[50];
	int pag, ano;
}livro;

int main()
{
	int n;
	livro l;
	
	FILE *arq = fopen("bd.txt","wb");
	
	printf("Titulo: ");
	scanf(" %[^\n]", l.nome);
	
	
	
	while(strcmp(l.nome,"sair"))
	{
		printf("autor: ");
		scanf(" %[^\n]", l.autor);
		printf("Paginas: ");
		scanf(" %d", &l.pag);
		printf("ano: ");
		scanf(" %d", &l.ano);
		
		fwrite(&l, sizeof(livro), 1, arq);
		
		printf("Titulo: ");
		scanf(" %[^\n]", l.nome);
	
	} 
	fclose(arq);
	
	printf("digite o numero do livro digitado: ");
	scanf(" %d", &n);
	FILE *arq2 = fopen("bd.txt","rb");
	
	while(n >= 0)
	{
		fseek(arq2 ,(n - 1) *  sizeof(livro), SEEK_SET);
		
		fread(&l ,sizeof(livro), 1, arq);
		
		printf("Nome: %s\nAutor: %s\nN pag: %d\nAno: %d\n",l.nome, l.autor, l.pag, l.ano); 
		
		printf("digite o numero do livro digitado: ");
		scanf(" %d", &n);
	}
	
	fclose(arq);
	
	return 0;
}
