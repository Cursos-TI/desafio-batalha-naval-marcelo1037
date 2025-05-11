#include <stdio.h>

#define tamanho 10

    int IniciarTabuleiro(int tabuleiro[tamanho][tamanho]) {

        for (int i = 0; i < tamanho; i++) {
        for (int j = 0; j < tamanho; j++) {
            tabuleiro[i][j] = 0;
        }
    }
        return 0;
    }

    int PosicionarNavios(int tabuleiro[tamanho][tamanho]) {

            // Navio horizontal de 3 posições

        tabuleiro[8][1] = 3;
        tabuleiro[8][2] = 3;
        tabuleiro[8][3] = 3;

            // Navio vertical de 3 posições
        
        tabuleiro[1][7] = 5;
        tabuleiro[2][7] = 5;
        tabuleiro[3][7] = 5;

    return 0;

    }

    int ImprimirTabuleiro(int tabuleiro[tamanho][tamanho]) {

            // Cabeçalho de A-J

    printf("   ");
        
        for (char letra = 'A'; letra < 'A' + tamanho; letra++) {

            printf(" %c ", letra);
        }

        printf("\n");

            // Linhas de 1 a 10
        
        for (int i = 0; i < tamanho; i++) {

            printf("%2d ", i + 1);

        for (int j = 0; j < tamanho; j++) {

            printf(" %d ", tabuleiro[i][j]);
        }

        printf("\n");

        }
        
    return 0;

    }

    int main(){

        int tabuleiro[tamanho][tamanho];
    
    IniciarTabuleiro(tabuleiro);
    PosicionarNavios(tabuleiro);
    ImprimirTabuleiro(tabuleiro);

        

return 0;
    
}