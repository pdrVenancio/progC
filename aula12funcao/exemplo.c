#include <stdio.h>
#include <stdlib.h>

/*
	- Preciso declarar a função antes do main()
	- Ou delcarar protótipo da função antes do main ()
	- Boa a prática é sempre usar o protótipo da função para criar as funções depois do main
	
	DECLARAÇÃO DE FUNÇÃO EM C (COM PARAMETROS):
	
	tipodafunção nomedafunção(listadeparamentros)
	{
		return expressao;
	}
	
	
	DECLARAÇÃO DE FUNÇÃO EM C (SEM PARAMETROS)
	
	tipodafunção nomedafunção()
	{
		return expressao;
	}
	
	OU:
	 
	tipodafunção nomedafunção(void)
	{
		return expressao;
	}
	
	DECLARAÇÃO DE FUNÇÃO EM C (SEM RETORNO)
	
	void nomedafunção(listadeparamentros)
	{
	}
	
	OU: 
	
	void nomedafunção(listadeparamentros)
	{
		return;
	}
	
	
	DECLARAÇÃO DO PROTÓTIPO DA FUNÇÃO EM C
	
	tipodafunção nomedafunção(listadeparamentros);
*/


int soma(int num1, int num2, int num3);
int maior(int num1, int num2, int num3);
void diaSemana(int valor);

int main()
{
	int n1, n2, n3;
	
	system("clear");
	printf("\n\n--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--");
	printf("\n                AULA FUNÇÔES - 29/06/2023               \n");
	printf("--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--\n\n");
	
	printf("\n\tDigite 3 valores: ");
	scanf("%d %d %d", &n1, &n2, &n3);
	
	printf("\n\tSoma: %d", soma(n1, n2, n3));
	printf("\n\tMaior: %d", maior(n1, n2, n3));
	
	printf("\n\n\tDigite o valor do dia da semana: ");
	scanf("%d", &n1);
	
	printf("\n\tDia da semana correspondente: ");
	diaSemana(n1);
	
	
	printf("\n\n--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--");
	printf("\n                FIM DA EXECUÇÃO DO CÓDIGO               \n");
	printf("--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--+--\n\n");	
	return 0;
}

int soma(int num1, int num2, int num3) // Preciso definir o tipo de cada variável, se não dá erro
{
	return (num1 + num2 + num3);

	/*
		OU:
		
		int resultado;
		resultado = num1 + num2 + num3;
		return resultado;
	*/
}

int maior(int num1, int num2, int num3) // Preciso definir o tipo de cada variável, se não dá erro
{
	int maior = num1;
	
	if(num2 > maior)
	{
		maior = num2;
	}
	
	if(num3 > maior)
	{
		maior = num3;
	}
	
	return maior;
}

void diaSemana(int valor)
{	
	if(valor == 1)
	{
		printf("Domingo");
	}
	else if(valor == 2)
	{
		printf("Segunda-Feira");
	}
	else if(valor == 3)
	{
		printf("Terça-Feira");
	}
	else if(valor == 4)
	{
		printf("Quarta-Feira");
	}
	else if(valor == 5)
	{
		printf("Quinta-Feira");
	}
	else if(valor == 6)
	{
		printf("Sexta-Feira");
	}
	else if(valor == 7)
	{
		printf("Sabádo");
	}
	else
	{
		printf("Valor digitado inválido!");
	}
	
	// Esse tipo de função não precisa de return
	// Ou posso usar return;
	return;
}