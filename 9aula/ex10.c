#include <stdio.h>
#include <string.h>

int main()
{
    char A[100];
    char B[100];
    int count = 0;

    fgets(A, 100, stdin);
    fgets(B, 100, stdin);

    if (A[strlen(A) - 1] == '\n')
        A[strlen(A) - 1] = '\0';
    if (B[strlen(B) - 1] == '\n')
        B[strlen(B) - 1] = '\0';

    int lenA = strlen(A);
    int lenB = strlen(B);

    for (int i = 0; i <= lenB - lenA; i++)
    {
        int j;
        for (j = 0; j < lenA; j++)
        {
            if (B[i + j] != A[j])
                break;
        }
        if (j == lenA)
            count++;
    }

    printf("%d\n", count);

    return 0;
}

