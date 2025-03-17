#include <stdio.h>

int main() {
    // Constantes para o número de casas a serem movidas
    const int casasBispo = 5;  // Bispo move 5 casas na diagonal superior direita
    const int casasTorre = 5;   // Torre move 5 casas para a direita
    const int casasRainha = 8;  // Rainha move 8 casas para a esquerda
    const int casasCavaloBaixo = 2; // Cavalo move 2 casas para baixo
    const int casasCavaloEsquerda = 1; // Cavalo move 1 casa para a esquerda

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

    // Movimento do Cavalo (2 casas para baixo e 1 casa para a esquerda) usando loops aninhados
    printf("\nMovimento do Cavalo:\n");
    for (int i = 1; i <= casasCavaloBaixo; i++) {
        printf("Baixo\n"); // Cavalo move-se duas casas para baixo
    }
    int casaCavaloEsquerda = 1;
    while (casaCavaloEsquerda <= casasCavaloEsquerda) {
        printf("Esquerda\n"); // Cavalo move-se uma casa para a esquerda
        casaCavaloEsquerda++;
    }

    return 0;
}
