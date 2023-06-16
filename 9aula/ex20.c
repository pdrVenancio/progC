#include <stdio.h>
#include <string.h>

#define M 1000000

int main()
{
	char t[M], s[M], s1[M];
	int i, dfa, j;
	
	scanf("%s", t);
	
	//contei diferente de a
	for( i = 0; t[i] != '\0'; i++)
	{
		if(t[i] != 'a')
			dfa++;		
	}
	
	//a qntidade de a == strlen(t) - dfa
	for(i = strlen(t) - dfa / 2; i < strlen(t); i++)
	{
		s1[j] = t[i];
		j++;
	}
	
	s1[j + 1] = '\0';
	
	//s == tudo de t menos os diferentes
	for(i = 0; i < strlen(t) - dfa / 2; i++)
	{
		s[i] = t[i];
	}
	s[i] = '\0';
	
	//comparando os diferentes de A em S com S1 para ver se stao na msm ordem
	j = 0;
	for( i = 0; i < strlen(s); i++)
		if(s[i] != 'a')
			if(s[i] == s1[j])
				j++;
	
	if(dfa % 2 == 0 && j == dfa / 2)
		printf("%s", s);
	else 
		printf("-1");

	return 0;
}


