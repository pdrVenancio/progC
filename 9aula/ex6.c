#include <stdio.h>
#include <string.h>

int main()
{
	char c[99], r[99];
	int i, t, j = 0, s = 0; 
	
	fgets(r, 99, stdin);

	for (i = 0; r[i] != '\0'; i++)
    {
        if (r[i] != ' ')
        {
            c[j] = r[i];
            j++;
        }
    }
 
    c[j] = '\0';

	t = strlen(c);
	t= t - 2;
	i = 0;
	
	while(t >= i)
	{
	   if(c[i] != c[t])
	        s++;
	    i++;
	    t--;
	}
	
	if(s == 0)
	    printf("sim");
	else 
        printf("nao");
	return 0;
}
