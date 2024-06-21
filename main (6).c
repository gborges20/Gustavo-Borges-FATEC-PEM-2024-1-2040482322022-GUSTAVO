#include <stdio.h>

// Inicializando o tabuleiro
char tabuleiro[8][8] = {
    {'B1', 'B2', 'B3', 'B4', 'B5', 'B6', 'B7', 'B8'},
    {'P1', 'P2', 'P3', 'P4', 'P5', 'P6', 'P7', 'P8'},
    {'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X'},
    {'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X'},
    {'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X'},
    {'X', 'X', 'X', 'X', 'X', 'X', 'X', 'X'},
    {'P1', 'P2', 'P3', 'P4', 'P5', 'P6', 'P7', 'P8'},
    {'B1', 'B2', 'B3', 'B4', 'B5', 'B6', 'B7', 'B8'}
};

// Função para imprimir o tabuleiro
void imprimir_tabuleiro(char tabuleiro[8][8]) {
    printf("\n   A B C D E F G H\n");
    for (int i = 0; i < 8; i++) {
        printf(" %d ", 7 - i);
        for (int j = 0; j < 8; j++) {
            if (tabuleiro[i][j] != 'X') {
                if (tabuleiro[i][j] >= 'a' || tabuleiro[i][j] <= 'z') {
                    printf("B%c ", tabuleiro[i][j]);
                } else {
                    printf("P%c ", tabuleiro[i][j]);
                }
            } else {
                printf("X ");
            }
        }
        printf("%d\n", 8 - i);
    }
    printf("   A B C D E F G H\n\n");
}


void jogada1(){
  tabuleiro[6][4] = 'X';
  tabuleiro[4][4] = 'P5';
  printf("Jogada #1:\n");
  imprimir_tabuleiro(tabuleiro);
}

void jogada2(){
  tabuleiro[7][5] = 'X';
  tabuleiro[5][5] = 'B3';
  printf("Jogada #2:\n");
  imprimir_tabuleiro(tabuleiro);
}

void jogada3(){
  tabuleiro[7][3] = 'X';
  tabuleiro[5][3] = 'B4';
  printf("Jogada #3:\n");
  imprimir_tabuleiro(tabuleiro);
}

void jogada4(){
  tabuleiro[5][3] = 'X';
  tabuleiro[6][5] = 'X';
  tabuleiro[7][4] = 'B4';
  printf("Jogada #4 - Xeque Mate:\n");
  imprimir_tabuleiro(tabuleiro);
}

int main() {
    
    

    // Jogada #1
    jogada1();

    // Jogada #2
    jogada2();

    // Jogada #3
    jogada3();

    // Jogada #4 - Xeque Mate
    jogada4();

    return 0;
}