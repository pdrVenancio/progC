#include<stdio.h>
#include<stdlib.h>
#include<string.h>

int main(){

    int hab, maxhab = 0;
    char nCit[40], maxC[40]; 

    FILE *arq = NULL;

    arq = fopen("bd.txt","r");

    if (!arq)
    {
        printf("Não foi possível abrir o arquivo.\n");
        exit(1);
    }

    fscanf(arq, "%[^\t] %d", nCit, &hab);
  

    while (!feof(arq))
    {
    		if(hab > maxhab)
    		{
    			maxhab = hab;
    			strcpy(maxC,nCit);
    		}
    		
    		     	fscanf(arq, "%[^\t] %d", nCit, &hab);
    }

		printf("%s --- %d", maxC, maxhab);
    
    char nome[90];
    
    printf("\nnome do arquivo\n");
    scanf("%[^\n]", nome);
	
    FILE *arqresp = NULL;
    
    arqresp = fopen(nome, "w");
    
    if(arqresp == NULL)
    {
    	printf("deu merda");
    	exit(1);
    }
    
    fprintf(arqresp, "%s %d", maxC, maxhab);
	
	
	fclose(arqresp);
    fclose(arq);

    return 0;
}
