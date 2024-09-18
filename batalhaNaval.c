#include <stdio.h>

#define linhas 3
#define colunas 5




int main() {
    int tabuleiro[linhas][colunas] = {0};

    //habilidade cone
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            tabuleiro[i][j] = 0; // Reinicializa o tabuleiro
            if(( i == 0 && j == 2) || (i == 1 && (j == 1 || j == 2 || j == 3))
            || (i == 2 && (j == 0 || j == 1 || j == 2 || j == 3 || j == 4))
            ){
                tabuleiro[i][j] = 1; //preenche com 1 formando o cone
            }
        }
    }
      // Exibirda habilidade do cone
    printf("\nHabilidade de cone:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

    //habilidade octaedro
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            tabuleiro[i][j] = 0; // Reinicializa o tabuleiro
            if((i == 0 && j == 2) || (i == 1 && (j == 1 || j == 2 || j == 3))
            || (i== 2 && j== 2)){
                tabuleiro[i][j] = 1; //preenche com 1 formando octaedro
            }
        }
    }
      // Exibirda habilidade do octaedro
    printf("\nHabilidade de octaedro:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }

     //habilidade cruz
    for(int i = 0; i < linhas; i++){
        for(int j = 0; j < colunas; j++){
            tabuleiro[i][j] = 0; // Reinicializa o tabuleiro
            if((i == 0 && j == 2) || (i == 1 && (j == 0 || j == 1 || j == 2 || j ==3 || j == 4))
            || (i == 2 && j == 2)){
                  tabuleiro[i][j] = 1; //preenche com 1 formando da cruz
            }
        }
    }
     // Exibirda habilidade do Cruz
    printf("\nHabilidade de cruz:\n");
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            printf("%d ", tabuleiro[i][j]);
        }
        printf("\n");
    }



    return 0;
}
