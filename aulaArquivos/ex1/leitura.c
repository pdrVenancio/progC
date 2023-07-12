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
    		
    		printf("%s\t%d\n", nCit, hab);
        	fscanf(arq, "%[^\t] %d", nCit, &hab);
    }
    
    printf("%s --- %d\n", maxC, maxhab);

    fclose(arq);

    return 0;
}
