#include <stdio.h>

int main() {
    int i, j;
    
    // Movimento da Torre (5 casas para a direita) usando 'for'
    printf("Movimento da Torre:\n");
    for (i = 0; i < 5; i++) {
        printf("Direita\n");
    }
    
    // Movimento do Bispo (5 casas na diagonal para cima e à direita) usando 'while'
    printf("\nMovimento do Bispo:\n");
    i = 0;
    while (i < 5) {
        printf("Cima Direita\n");
        i++;
    }
    
    // Movimento da Rainha (8 casas para a esquerda) usando 'do-while'
    printf("\nMovimento da Rainha:\n");
    i = 0;
    do {
        printf("Esquerda\n");
        i++;
    } while (i < 8);
    
    // Movimento do Cavalo (2 casas para baixo e 1 para a esquerda) usando loops aninhados
    printf("\nMovimento do Cavalo:\n");
    for (i = 0; i < 2; i++) {
        printf("Baixo\n");
    }
    j = 0;
    while (j < 1) {
        printf("Esquerda\n");
        j++;
    }
    
    return 0;
}
