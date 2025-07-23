#include <stdio.h>
#include <stdlib.h>

#define TAMANHO 9

void limparCampo(int campo[TAMANHO][TAMANHO]) {
    for (int linha = 0; linha < TAMANHO; linha++) {
        for (int coluna = 0; coluna < TAMANHO; coluna++) {
            campo[linha][coluna] = 0;
        }
    }
}

void mostrarCampo(const char* titulo, int campo[TAMANHO][TAMANHO]) {
    printf("\n🌊 %s 🌊\n\n", titulo);
    for (int linha = 0; linha < TAMANHO; linha++) {
        for (int coluna = 0; coluna < TAMANHO; coluna++) {
            printf("%d ", campo[linha][coluna]);
        }
        printf("\n");
    }
}

void habilidadeCone(int mapa[TAMANHO][TAMANHO], int centroY, int centroX) {
    for (int profundidade = 0; profundidade < 3; profundidade++) {
        for (int lateral = -profundidade; lateral <= profundidade; lateral++) {
            int y = centroY + profundidade;
            int x = centroX + lateral;
            if (y >= 0 && y < TAMANHO && x >= 0 && x < TAMANHO) {
                mapa[y][x] = 1;
            }
        }
    }
}

void habilidadeCruz(int mapa[TAMANHO][TAMANHO], int centroY, int centroX) {
    for (int offset = -2; offset <= 2; offset++) {
        if (centroY + offset >= 0 && centroY + offset < TAMANHO)
            mapa[centroY + offset][centroX] = 1;
        if (centroX + offset >= 0 && centroX + offset < TAMANHO)
            mapa[centroY][centroX + offset] = 1;
    }
}

void habilidadeLosango(int mapa[TAMANHO][TAMANHO], int centroY, int centroX) {
    for (int dy = -2; dy <= 2; dy++) {
        for (int dx = -2; dx <= 2; dx++) {
            if (abs(dy) + abs(dx) <= 2) {
                int y = centroY + dy;
                int x = centroX + dx;
                if (y >= 0 && y < TAMANHO && x >= 0 && x < TAMANHO) {
                    mapa[y][x] = 1;
                }
            }
        }
    }
}

int main() {
    int campoBatalha[TAMANHO][TAMANHO];

    limparCampo(campoBatalha);
    habilidadeCone(campoBatalha, 2, 4);
    mostrarCampo("Ataque em Cone 🔺", campoBatalha);

    limparCampo(campoBatalha);
    habilidadeCruz(campoBatalha, 4, 4);
    mostrarCampo("Ataque em Cruz ✝️", campoBatalha);

    limparCampo(campoBatalha);
    habilidadeLosango(campoBatalha, 4, 4);
    mostrarCampo("Explosão em Losango ◯", campoBatalha);

    return 0;
}
