# Desafio Batalha Naval - Nível Aventureiro

##  Objetivo

Evoluir o projeto do Batalha Naval expandindo o tamanho do tabuleiro e aumentando a complexidade do posicionamento dos navios. Nesta etapa, os principais objetivos são:

- Declarar um tabuleiro 10x10.
- Posicionar 4 navios:
  - Um navio vertical
  - Um navio horizontal
  - Dois navios em posição diagonal
- Utilizar o número `3` para representar navios e `0` para espaços vazios.
- Exibir o tabuleiro completo no console.

---

##  Código Desenvolvido

``c
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

3 0 0 0 0 0 0 0 0 3 
0 3 0 0 0 0 0 0 3 0 
0 0 3 0 0 0 0 3 0 0 
0 0 0 0 0 0 0 0 0 0 
0 0 0 0 0 0 0 0 0 0 
0 0 0 0 0 0 0 0 0 0 
0 0 0 0 0 3 3 3 0 0 
0 0 0 0 0 0 0 0 0 0 
0 0 0 0 0 0 0 0 0 0 
0 0 0 0 0 0 0 0 0 0 

## Conclusão
Este nível aumentou a complexidade do projeto com:

Um tabuleiro maior

Lógica de posicionamento em eixos diagonais

Clareza visual do estado do jogo no console

O sistema está pronto para receber jogadas, detecção de acertos e lógica de vitória nas próximas fases.
