#include <stdio.h>
#include <string.h>

int main(void) {
  char artigoPrepo[] = {"a",    "e", "o",   "em", "ou", "pra",  "para", "é", "que", "um", "uma"};
  char frase[100];

  printf("Insira uma frase:\n");
  scanf("%s", frase);

  printf("Frase invertida: ");
  for (int i = strlen(frase) - 1; i >= 0; i--) {
    printf("%c", frase[i]);
  }
  printf("\n");

  return 0;
}