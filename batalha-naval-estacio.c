#include <stdio.h>
#include <string.h>

#define TAM 10
#define NAVIO 3
#define AGUA 0
#define MARCA_NAVIO 3

void inicializarTabuleiro(int tabuleiro[TAM][TAM]) {
    for (int i = 0; i < TAM; i++) {
        for (int j = 0; j < TAM; j++) {
            tabuleiro[i][j] = AGUA;
        }
    }
}

void imprimirTabuleiro(int tabuleiro[TAM][TAM]) {
    printf("   ");
    for (int i = 0; i < TAM; i++) {
        printf("%2d ", i);  // Cabeçalho de colunas
    }
    printf("\n");

    for (int i = 0; i < TAM; i++) {
        printf("%2d ", i);  // Número da linha
        for (int j = 0; j < TAM; j++) {
            printf("%2d ", tabuleiro[i][j]);
        }
        printf("\n");
    }
}

int podePosicionar(int tabuleiro[TAM][TAM], int linha, int coluna, char orientacao) {
    if (orientacao == 'H') {
        if (coluna + NAVIO > TAM) return 0;
        for (int i = 0; i < NAVIO; i++) {
            if (tabuleiro[linha][coluna + i] != AGUA) return 0;
        }
    } else if (orientacao == 'V') {
        if (linha + NAVIO > TAM) return 0;
        for (int i = 0; i < NAVIO; i++) {
            if (tabuleiro[linha + i][coluna] != AGUA) return 0;
        }
    } else {
        return 0;
    }
    return 1;
}

void posicionarNavio(int tabuleiro[TAM][TAM], int linha, int coluna, char orientacao) {
    if (orientacao == 'H') {
        for (int i = 0; i < NAVIO; i++) {
            tabuleiro[linha][coluna + i] = MARCA_NAVIO;
        }
    } else {
        for (int i = 0; i < NAVIO; i++) {
            tabuleiro[linha + i][coluna] = MARCA_NAVIO;
        }
    }
}

int main() {
    int tabuleiro[TAM][TAM];
    int linha, coluna;
    char orientacao;

    inicializarTabuleiro(tabuleiro);

    printf("==== BATALHA NAVAL - POSICIONAR 2 NAVIOS ====\n");
    printf("O tabuleiro tem tamanho 10x10 (linhas e colunas de 0 a 9).\n");
    printf("Cada navio ocupa 3 espaços. Use H para horizontal e V para vertical.\n\n");

    for (int i = 1; i <= 2; i++) {
        printf("== Posicionando o Navio %d ==\n", i);
        do {
            printf("Digite a linha inicial: ");
            scanf("%d", &linha);

            printf("Digite a coluna inicial: ");
            scanf("%d", &coluna);

            printf("Digite a orientacao (H ou V): ");
            scanf(" %c", &orientacao);

            // Converte para maiúscula se o usuário digitar minúscula
            if (orientacao >= 'a' && orientacao <= 'z') {
                orientacao -= 32;
            }

            if (!podePosicionar(tabuleiro, linha, coluna, orientacao)) {
                printf("Posição inválida ou navio ultrapassa os limites / sobrepõe outro. Tente novamente.\n");
            }
        } while (!podePosicionar(tabuleiro, linha, coluna, orientacao));

        posicionarNavio(tabuleiro, linha, coluna, orientacao);
        printf("Navio %d posicionado com sucesso!\n\n", i);
    }

    printf("==== TABULEIRO FINAL ====\n");
    imprimirTabuleiro(tabuleiro);

    return 0;
}
