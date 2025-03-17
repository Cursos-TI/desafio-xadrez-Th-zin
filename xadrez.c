#include <stdio.h>

// Função recursiva para o movimento da Torre (direita)
int moverTorre(int casas) {
    if (casas <= 0) return 0; // Condição de parada da recursão
    printf("Direita\n"); // Movimento da Torre
    return moverTorre(casas - 1); // Chamada recursiva
}

// Função recursiva para o movimento do Bispo (diagonal superior direita)
int moverBispo(int casas) {
    if (casas <= 0) return 0; // Condição de parada da recursão
    printf("Cima, Direita\n"); // Movimento do Bispo
    return moverBispo(casas - 1); // Chamada recursiva
}

// Função recursiva para o movimento da Rainha (esquerda)
int moverRainha(int casas) {
    if (casas <= 0) return 0; // Condição de parada da recursão
    printf("Esquerda\n"); // Movimento da Rainha
    return moverRainha(casas - 1); // Chamada recursiva
}

// Função para o movimento do Cavalo (duas casas para cima e uma para a direita)
int moverCavalo() {
    for (int i = 1; i <= 2; i++) { // Loop para movimento vertical (cima)
        printf("Cima\n");
        if (i == 2) { // Condição para o movimento horizontal (direita)
            for (int j = 1; j <= 1; j++) {
                printf("Direita\n");
                break; // Sai do loop interno após uma casa para a direita
            }
        }
    }
    return 0;
}

// Função para o movimento do Bispo com loops aninhados
int moverBispoComLoopsAninhados() {
    for (int vertical = 1; vertical <= 5; vertical++) { // Loop vertical (cima)
        for (int horizontal = 1; horizontal <= 5; horizontal++) { // Loop horizontal (direita)
            printf("Cima, Direita\n"); // Movimento do Bispo
            if (horizontal == 5) break; // Sai do loop horizontal após 5 movimentos
        }
        if (vertical == 5) break; // Sai do loop vertical após 5 movimentos
    }
    return 0;
}

int main() {
    // Constantes para o número de casas a serem movidas
    const int casasTorre = 5;   // Torre move 5 casas para a direita
    const int casasBispo = 5;   // Bispo move 5 casas na diagonal superior direita
    const int casasRainha = 8;  // Rainha move 8 casas para a esquerda

    // Movimento da Torre (recursivo)
    printf("Movimento da Torre:\n");
    moverTorre(casasTorre);

    // Movimento do Bispo (recursivo)
    printf("\nMovimento do Bispo (recursivo):\n");
    moverBispo(casasBispo);

    // Movimento do Bispo com loops aninhados
    printf("\nMovimento do Bispo (loops aninhados):\n");
    moverBispoComLoopsAninhados();

    // Movimento da Rainha (recursivo)
    printf("\nMovimento da Rainha:\n");
    moverRainha(casasRainha);

    // Movimento do Cavalo (loops complexos)
    printf("\nMovimento do Cavalo:\n");
    moverCavalo();

    return 0;
}
