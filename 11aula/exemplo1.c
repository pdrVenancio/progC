#include <stdio.h>
#include <stdlib.h>

int main()
{
	system("clear");	
	
	printf("\n\n-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-");
	printf("\n              PONTEIROS              \n");
	printf("-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-\n\n");
	
	// EXEMPLO 1: 
	printf("\t EXEMPLO 1 \n\t");
	
	// Para criação de ponteiros utilizo o tipo de pnteiro, asterisco (*) depois nova da variável, exemplo: int *pont;
	
	int a = 2, *x = NULL, *y = NULL;;	
	
	x = &a; // Atribuição de endereço: X aponta para A
	y = x;  // Y aponta para X (que aponta para A) Y também aponta para A
	
	printf("\nEndereco de A:\t %p ", &a); // Endereco de A:	 0x7ffc30502ec4 
	printf("\nX Aponta para:\t %p ", x ); // X Aponta para:	 0x7ffc30502ec4 
	printf("\nEndereco de X:\t %p ", &x); // Endereco de X:	 0x7ffc30502ec8 
	printf("\nConteudo de X:\t %d ", *x); // Conteúdo de X:	 2 
	
	printf("\n");
	
	printf("\nEndereco de X:\t %p ", &x); // Endereco de X:	 0x7ffc30502ec8 
	printf("\nY Aponta para:\t %p ", y ); // Y Aponta para:	 0x7ffc30502ec4 
	printf("\nEndereco de Y:\t %p ", &y); // Endereco de Y:	 0x7ffc30502ed0 
	printf("\nConteudo de Y:\t %d ", *y); // Conteúdo de Y:	 2 
		
	printf("\n");
	
	printf("\nValor de A:\t %d ", a); // Valor de A:	 2 
	
	*x = 7;
	
	printf("\nValor de A:\t %d ", a); // Valor de A:	 7 
	
	// OPERAÇÕES ARITMÉTICAS ENTRE PONTEIROS 
	printf("\n\n\t OPERACOES ARITMETICAS ENTRE PONTEIROS \n\t");
	
	// Só posso fazer com números inteiros e apenas operações de adição e subtração
	// Indefinida ao menos que executada entre uma matriz ou um vetor, sempre mesma matriz ou vetor
	
	printf("\n\n-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-");
	printf("\n           FIM DO PROGRAMA           \n");
	printf("-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-\n\n");
	
	return 0;
}