#include <stdio.h>

int main (){
    int i;

    //Bispo: 5 casas na diagonal (Cima + Direita)
    printf("Bispo:\n");
    for (i = 0; i < 5; i++) {
        printf("Cima\n");
        printf("Direita\n");
    }
    printf("\n");

    // Torre: 5 casas para direita
    printf("Torre:\n");
    i = 0;
    while (i < 5) {
        printf("Direita\n");
        i++;
    }
    printf("\n");

    // Rainha: 8 casas para a esquerda
    printf("Rainha:\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < 8);

    return 0;
}
