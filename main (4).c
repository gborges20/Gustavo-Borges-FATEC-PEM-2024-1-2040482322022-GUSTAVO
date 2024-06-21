#include <stdio.h>
#include <string.h>
#include<time.h>//necessário p/ função time()
#include <stdlib.h>// necessário p/ as funções rand() e srand()

struct produtos {
  int codigo;
  int quantidade;
  float preco;
  char nomeP[20];
  char descP[50];
};

struct produtos produtos1;

void inserirProdutos()
{
  char nomeT;
  printf("Insisra o nome do produto:\n");
  scanf("%s",&nomeT);
  strcpy(produtos1.nomeP, &nomeT);
  //a variavel abaixo é utilizada para o nome do produto e reutilizada para a descrição do produto
  nomeT = ' ';
  
  printf("Insira a descrição do produto:\n");
  scanf("%s",&nomeT);
  strcpy(produtos1.descP, &nomeT);
  
  float valor=0;
  printf("Insira o valor do produto:\n");
  scanf("%f",&valor);
  produtos1.preco = valor;

  int qtd=0;
  printf("Insira a quantidade do produto:\n");
  scanf("%i",&qtd);
  produtos1.quantidade = qtd;

  nomeT=' ';
  valor=0;
  qtd=0;

  srand(time(NULL));
int i;
  
    // gerando valores aleatórios na faixa de 0 a 100
    printf("Este é o código do produto cadastrado: %d \n", rand() % 100);
};



int main(void) {
  int acao;
  printf("MENU\n");
  printf("1 - Inserir produto\n");
  printf("2 - Comprar\n");
  printf("3 - Estoque\n");
  scanf("%i", &acao);

  switch (acao) { // se zero
  case 0:
    printf("Insira uma opção válida");
    break;
  // inserir produto
  case 1:
    inserirProdutos();
    break;
    // comprar
  case 2:

    break;
    // estoque
  case 3:

    break;
    
    default:
    printf("Insira uma opção válida");
  }

  return 0;
}