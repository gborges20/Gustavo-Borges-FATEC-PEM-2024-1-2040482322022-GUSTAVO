#include <stdio.h>

int main(void) {
  int contador;
  int linhas = 7;
  int colunas = 7;
  int controler;

  
  char defesas[] = {'T', 'C', 'B'};
  char corte[] = {'R', 'D'};
  char peao[] = {'p'};
  int numPeca=0;
  
for(controler=0;controler<=linhas;controler++){
  printf("%c\t",defesas[numPeca]);
  numPeca++;

  if (numPeca>3){
    
    printf("%c\t%c",corte[0],corte[1]);
  numPeca=0;
  }


  
}
  
/*  for (contador = 0; contador <= colunas; contador++) {
    printf("%c\t", defesas[contador]);
    
  }
*/
  return 0;
}