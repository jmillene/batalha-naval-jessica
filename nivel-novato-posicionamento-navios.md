# Desafio Batalha Naval - Nível Novato

## Objetivo

Desenvolver um sistema simples de posicionamento de navios em um tabuleiro 5x5 para o jogo Batalha Naval. O foco desta etapa é:

- Declarar e inicializar um tabuleiro bidimensional.
- Posicionar dois navios: um vertical e um horizontal.
- Exibir no console as **coordenadas de cada parte dos navios**.
- Mostrar a **matriz final do tabuleiro**.

---

## Código Desenvolvido

``c
#include <stdio.h>


 // Nível Novato - Posicionamento dos Navios
    // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
    // Sugestão: Posicione dois navios no tabuleiro, um verticalmente e outro horizontalmente.
    // Sugestão: Utilize `printf` para exibir as coordenadas de cada parte dos navios.


  // Sugestão: Declare uma matriz bidimensional para representar o tabuleiro (Ex: int tabuleiro[5][5];).
int main() {
    int tabuleiro[5][5];

    // Inicializa o tabuleiro com zeros (sem navios)
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            tabuleiro[i][j] = 0;
        }
    }

    // Posiciona um navio vertical (tamanho 3) na coluna 1
    for (int i = 0; i < 3; i++) {
        tabuleiro[i][1] = 1;
        printf("Navio vertical - Parte em: (%d, %d)\n", i, 1);
    }

    // Posiciona um navio horizontal (tamanho 3) na linha 3
    for (int j = 2; j < 5; j++) {
        tabuleiro[3][j] = 1;
        printf("Navio horizontal - Parte em: (%d, %d)\n", 3, j);
    }

    // Exibe o tabuleiro final
    printf("\nTabuleiro Final:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    return 0;
}
Navio vertical - Parte em: (0, 1)
Navio vertical - Parte em: (1, 1)
Navio vertical - Parte em: (2, 1)
Navio horizontal - Parte em: (3, 2)
Navio horizontal - Parte em: (3, 3)
Navio horizontal - Parte em: (3, 4)

Tabuleiro Final:
0 1 0 0 0
0 1 0 0 0
0 1 0 0 0
0 0 1 1 1
0 0 0 0 0

## Conclusão
Este desafio introduziu os conceitos básicos de:

Estrutura de dados (matriz bidimensional)

Manipulação de posições na matriz

Impressão organizada de coordenadas e do tabuleiro

O sistema está pronto para avançar para os próximos níveis (Aventureiro, Mestre, etc).
