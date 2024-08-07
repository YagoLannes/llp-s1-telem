#include <stdio.h>

int main() {
  int ano;
  printf("Digite um ano \n");
  scanf ("%d", &ano);
  if (ano %4 ==0 && ano %100!=0 || ano %400 ==0) {
    printf("O ano %d é bissexto. \n", ano);
  }else{
    printf("O ano %d não é bissexto.\n", ano);
    return 0;
  }
  
}
