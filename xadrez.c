#include <stdio.h>

int main() {
    // Constantes para o número de casas a serem movidas
    const int casasBispo = 5;  // Bispo move 5 casas na diagonal superior direita
    const int casasTorre = 5;   // Torre move 5 casas para a direita
    const int casasRainha = 8;  // Rainha move 8 casas para a esquerda

    // Movimento do Bispo (5 casas na diagonal superior direita) usando FOR
    printf("Movimento do Bispo:\n");
    for (int i = 1; i <= casasBispo; i++) {
        printf("Cima, Direita\n"); // Bispo move-se na diagonal (cima + direita)
    }

    // Movimento da Torre (5 casas para a direita) usando WHILE
    printf("\nMovimento da Torre:\n");
    int casaTorre = 1;
    while (casaTorre <= casasTorre) {
        printf("Direita\n"); // Torre move-se horizontalmente para a direita
        casaTorre++;
    }

    // Movimento da Rainha (8 casas para a esquerda) usando DO-WHILE
    printf("\nMovimento da Rainha:\n");
    int casaRainha = 1;
    do {
        printf("Esquerda\n"); // Rainha move-se horizontalmente para a esquerda
        casaRainha++;
    } while (casaRainha <= casasRainha);

    return 0;
}