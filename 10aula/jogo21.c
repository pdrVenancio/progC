#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

typedef struct {
    char suit[10];
    char rank[3];
    int value;
} Card;

int main() {
    char suits[4][10] = {"Hearts", "Diamonds", "Clubs", "Spades"};
    char ranks[13][3] = {"2", "3", "4", "5", "6", "7", "8", "9", "10", "J", "Q", "K", "A"};
    Card deck[52];

    // Criar o baralho
    int index = 0;
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 13; j++) {
            int value = 0;
            if (strcmp(ranks[j], "A") == 0) {
                value = 1;
            } else if (strcmp(ranks[j], "J") == 0 || strcmp(ranks[j], "Q") == 0 || strcmp(ranks[j], "K") == 0) {
                value = 10;
            } else {
                value = atoi(ranks[j]);
            }

            strcpy(deck[index].suit, suits[i]);
            strcpy(deck[index].rank, ranks[j]);
            deck[index].value = value;
            index++;
        }
    }

    // Embaralhar o baralho
    srand(time(NULL));
    for (int i = 51; i > 0; i--) {
        int j = rand() % (i + 1);

        Card temp = deck[i];
        deck[i] = deck[j];
        deck[j] = temp;
    }

    // Exemplo de uso: imprimir as cartas do baralho
    for (int i = 0; i < 52; i++) {
        printf("%s of %s\n", deck[i].rank, deck[i].suit);
    }

    return 0;
}