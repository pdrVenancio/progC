#include <stdio.h>

int main() {
    int i;
    char s, e;
    
    scanf("%d %c %c", &i, &s, &e);
    
    if ((s == 'M' && e == 'M' && i >= 2) ||
        (s == 'F' && e == 'M' && i >= 3) ||
        (s == 'M' && e == 'S' && i >= 1) ||
        (s == 'F' && e == 'S' && i >= 2)) {
        printf("sim");
    } else {
        printf("nao");
    }
    
    return 0;
}
