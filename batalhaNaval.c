#include <stdio.h>

#define linhas 10
#define colunas 10

int main() {
    int tabuleiro[linhas][colunas] = {0};

    // Navio 1, vertical. Localização: Coluna 2, Linha de 1 a 3
    for(int i = 1; i <= 3; i++){
        tabuleiro[i][2] = 3;  // marca o navio com 3
    }
    // Exibição da localização do navio 1
    printf("Coordenadas do navio 1 (Vertical)\n");
    for(int i = 1; i <= 3; i++){
        printf("Coordenadas x e y (%d %d)\n", i, 2);
    }

    // Navio 2, Horizontal. Linha 4, colunas de 1 a 3
    for(int j = 1; j <= 3; j++){
        tabuleiro[4][j] = 3;  // marca o navio com 3
    }
    // Exibição da localização do navio 2
    printf("Coordenadas do navio 2 (Horizontal)\n");
    for(int j = 1; j <= 3; j++){
        printf("Coordenadas x e y (%d %d)\n", 4, j);
    }

    // Navio 3, Diagonal. Posição de 6,6 até 8,8
    for(int i = 6, j = 6; i <= 8 && j <= 8; i++, j++){
        tabuleiro[i][j] = 3;  // marca o navio com 3
    }
    printf("Coordenadas do navio 3 (Diagonal)\n");
    for(int i = 6, j = 6; i <= 8 && j <= 8; i++, j++){
        printf("Coordenadas x e y (%d %d)\n", i, j);
    }

    // Navio 4, Diagonal inversa. Posição de 1,9 até 3,7
    for(int i = 1, j = 9; i <= 3 && j >= 7; i++, j--){
        tabuleiro[i][j] = 3;  // marca o navio com 3
    }
    printf("Coordenadas do navio 4 (Diagonal inversa)\n");
    for(int i = 1, j = 9; i <= 3 && j >= 7; i++, j--){
        printf("Coordenadas x e y (%d %d)\n", i, j);
    }

    // Exibição do tabuleiro completo
    printf("Tabuleiro:\n");
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

   



    // Nível Aventureiro - Expansão do Tabuleiro e Posicionamento Diagonal
    // Sugestão: Expanda o tabuleiro para uma matriz 10x10.
    // Sugestão: Posicione quatro navios no tabuleiro, incluindo dois na diagonal.
    // Sugestão: Exiba o tabuleiro completo no console, mostrando 0 para posições vazias e 3 para posições ocupadas.

    // Nível Mestre - Habilidades Especiais com Matrizes
    // Sugestão: Crie matrizes para representar habilidades especiais como cone, cruz, e octaedro.
    // Sugestão: Utilize estruturas de repetição aninhadas para preencher as áreas afetadas por essas habilidades no tabuleiro.
    // Sugestão: Exiba o tabuleiro com as áreas afetadas, utilizando 0 para áreas não afetadas e 1 para áreas atingidas.

    // Exemplos de exibição das habilidades:
    // Exemplo para habilidade em cone:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 1 1 1 1 1
    
    // Exemplo para habilidade em octaedro:
    // 0 0 1 0 0
    // 0 1 1 1 0
    // 0 0 1 0 0

    // Exemplo para habilidade em cruz:
    // 0 0 1 0 0
    // 1 1 1 1 1
    // 0 0 1 0 0

    return 0;
}
