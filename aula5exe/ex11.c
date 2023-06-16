#include<stdio.h>

int main()
{
	int i, tt;
	
	printf("Digite o sua idade e o tempo de serviço:\n");
	scanf("%d %d", &i, &tt);
	
	if(i >= 65 || tt >=30 || (i >= 60 && tt >= 25)){
		printf("sim\n");
		
	}else
		printf("nao\n");

	return 0;
}
