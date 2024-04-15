#include <stdio.h>


int main(void) {

/*LEGENDA DE NOMENCLATURA:

PEÇAS BRANCAS (no topo do tabuleiro):
TB1 = Torre - Branca - 1
CB1 = Cavalo - Branco - 1
BB1 = Bispo - Branco - 1

REB = Rei - Branco
RAB = Rainha - Branca

BB2 = Bispo - Branco - 2
CB2 = Cavalo - Branco - 2
TB2 = Torre - Branca - 2

pB1 = peão - Branco - 1
pB2 = peão - Branco - 2
assim por diante...

PEÇAS PRETAS  (na base do tabuleiro):
TP1 = Torre - Preta - 1
CP1 = Cavalo - Preto - 1
BP1 = Bispo - Preto - 1

REP = Rei - Preto
RAP = Rainha - Preta

BP2 = Bispo - Preto - 2
CP2 = Cavalo - Preto - 2
TP2 = Torre - Preta - 2

pB1 = peão - Preto - 1
pB2 = peão - Preto - 2
assim por diante...

COORDENADAS DO TABULEIRO:
Os números a esquerda do tabuleiro representam as linhas.
As letras abaixo do tabuleiro representam as colunas.
Os " X " representam os espaços vazios no tabuleiro.
*/


  
  //coordenada da linha
  printf(" 8\t");
  //configuração das peças brancas
  printf("TB1\t");
  printf("CB1\t");
  printf("BB1\t");
  printf("REB\t");
  printf("RAB\t");
  printf("BB2\t");
  printf("CB2\t");
  printf("TB2\t\n");
  //configuração dos peões brancos
  printf(" 7\t");  //coordenada da linha
  printf("pB1\t");
  printf("pB2\t");
  printf("pB3\t");
  printf("pB4\t");
  printf("pB5\t");
  printf("pB6\t");
  printf("pB7\t");
  printf("pB8\t\n");
  //espaços do tabuleiro (1°linha)
  printf(" 6\t");  //coordenada da linha
  printf(" X\t");
  printf(" X\t");
  printf(" X\t");
  printf(" X\t");
  printf(" X\t");
  printf(" X\t");
  printf(" X\t");
  printf(" X\t\n");
   //espaços do tabuleiro (2°linha)
  printf(" 5\t");  //coordenada da linha
  printf(" X\t");
  printf(" X\t");
  printf(" X\t");
  printf(" X\t");
  printf(" X\t");
  printf(" X\t");
  printf(" X\t");
  printf(" X\t\n");
   //espaços do tabuleiro (3°linha)
  printf(" 4\t");  //coordenada da linha
  printf(" X\t");
  printf(" X\t");
  printf(" X\t");
  printf(" X\t");
  printf(" X\t");
  printf(" X\t");
  printf(" X\t");
  printf(" X\t\n");
  //espaços do tabuleiro (4°linha)
  printf(" 3\t");  //coordenada da linha
  printf(" X\t");
  printf(" X\t");
  printf(" X\t");
  printf(" X\t");
  printf(" X\t");
  printf(" X\t");
  printf(" X\t");
  printf(" X\t\n");

  //configuração dos peões pretos
  printf(" 2\t");  //coordenada da linha
  printf("pP1\t");
  printf("pP2\t");
  printf("pP3\t");
  printf("pP4\t");
  printf("pP5\t");
  printf("pP6\t");
  printf("pP7\t");
  printf("pP8\t\n");
  
  //configuração das peças pretas
  printf(" 1\t");  //coordenada da linha
  printf("TP1\t");
  printf("CP1\t");
  printf("BP1\t");
  printf("REP\t");
  printf("RAP\t");
  printf("BP2\t");
  printf("CP2\t");
  printf("TP2\t\n");

  //coordenada da coluna
  printf("     a\t");
  printf(" b\t");
  printf(" c\t");
  printf(" d\t");
  printf(" e\t");
  printf(" f\t");
  printf(" g\t");
  printf(" h\t");
  return 0;
}