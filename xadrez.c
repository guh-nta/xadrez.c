
/*
 * Projeto: Desafio Xadrez
 * Autor: [Seu Nome]
 * Descrição: Simula o movimento de peças de xadrez (Torre, Bispo, Rainha e Cavalo)
 * utilizando estruturas de repetição, recursividade e loops complexos.
 */

#include <stdio.h>

// Função recursiva para o movimento da Torre (5 casas à direita)
void moverTorre(int passo, int limite) {
    if (passo < limite) {
        printf("Direita\n");
        moverTorre(passo + 1, limite);
    }
}

// Função recursiva para o movimento do Bispo, com loops aninhados (diagonal superior direita)
void moverBispo(int passo, int limite) {
    if (passo < limite) {
        for (int i = 0; i < 1; i++) {
            for (int j = 0; j < 1; j++) {
                printf("Cima Direita\n");
            }
        }
        moverBispo(passo + 1, limite);
    }
}

// Função recursiva para o movimento da Rainha (8 casas à esquerda)
void moverRainha(int passo, int limite) {
    if (passo < limite) {
        printf("Esquerda\n");
        moverRainha(passo + 1, limite);
    }
}

// Função com loops complexos para o movimento do Cavalo (2 cima, 1 direita)
void moverCavalo() {
    int cima = 2;
    int direita = 1;

    for (int i = 0, j = 0; i < cima || j < direita; i++, j++) {
        if (i < cima) {
            printf("Cima\n");
        }
        if (j == direita - 1) {
            printf("Direita\n");
            break;
        }
    }
}

int main() {
    // Movimento da Torre
    printf("Movimento da Torre:\n");
    moverTorre(0, 5);

    // Espaço em branco
    printf("\n");

    // Movimento do Bispo
    printf("Movimento do Bispo:\n");
    moverBispo(0, 5);

    // Espaço em branco
    printf("\n");

    // Movimento da Rainha
    printf("Movimento da Rainha:\n");
    moverRainha(0, 8);

    // Espaço em branco
    printf("\n");

    // Movimento do Cavalo
    printf("Movimento do Cavalo:\n");
    moverCavalo();

    return 0;
}
