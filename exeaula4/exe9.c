#include<stdio.h>

int main()
{
	float porFaltas, carHoraria, horFaltas;
	
	printf("Digite a carga horaria da disciplina e a quantidade de horas de falta:\n");
	scanf("%f %f", &carHoraria, &horFaltas);
	
	porFaltas = 100 * horFaltas / carHoraria;
	
	printf("A porcentagem em faltas é: %.0f %%\n", porFaltas);
	
	return 0;
}
