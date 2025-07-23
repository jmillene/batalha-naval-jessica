#include <stdio.h>

int main() {
    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Expande o tabuleiro para 10x10
    int tabuleiro[10][10];

    // Inicializa todas as posições com 0 (vazio)
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Posiciona 4 navios, sendo dois na diagonal

    // Navio 1 - vertical (coluna 2)
    for (int i = 2; i < 5; i++) {
        tabuleiro[i][2] = 3;
    }

    // Navio 2 - horizontal (linha 6)
    for (int j = 5; j < 8; j++) {
        tabuleiro[6][j] = 3;
    }

    // Navio 3 - diagonal principal (de cima para baixo)
    for (int i = 0; i < 3; i++) {
        tabuleiro[i][i] = 3;
    }

    // Navio 4 - diagonal secundária (de cima para baixo, invertido)
    for (int i = 0; i < 3; i++) {
        tabuleiro[i][9 - i] = 3;
    }

    // Exibe o tabuleiro final no console
    printf("Tabuleiro 10x10 (0 = água, 3 = navio):\n\n");
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
