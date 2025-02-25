#include <stdio.h>

// Função recursiva para movimentar a Torre
void moverTorre(int casas) {
    if (casas == 0) return;
    printf("Direita\n");
    moverTorre(casas - 1);
}

// Função recursiva para movimentar o Bispo
void moverBispo(int casas, int mov) {
    if (casas == 0) return;
    for (int i = 0; i < mov; i++) {
        printf("Cima Direita\n");
    }
    moverBispo(casas - 1, mov);
}

// Função recursiva para movimentar a Rainha
void moverRainha(int casas) {
    if (casas == 0) return;
    printf("Esquerda\n");
    moverRainha(casas - 1);
}

int main() {
    // Movimento da Torre (5 casas para a direita) - Usando recursão
    printf("Movimento da Torre:\n");
    moverTorre(5);
    printf("\n");

    // Movimento do Bispo (5 casas na diagonal para cima e à direita) - Usando recursão e loops aninhados
    printf("Movimento do Bispo:\n");
    moverBispo(5, 1);
    printf("\n");

    // Movimento da Rainha (8 casas para a esquerda) - Usando recursão
    printf("Movimento da Rainha:\n");
    moverRainha(8);
    printf("\n");

    // Movimento do Cavalo (2 casas para cima, 1 casa para a direita) - Usando loops complexos
    printf("Movimento do Cavalo:\n");
    for (int i = 0; i < 2; i++) {
        printf("Cima\n");
    }
    for (int j = 0; j < 1; j++) {
        printf("Direita\n");
    }
    
    return 0;
}
