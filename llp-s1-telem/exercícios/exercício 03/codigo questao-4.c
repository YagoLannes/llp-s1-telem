#include <stdio.h>

void exibirBits(int num) {
  int i;
  for (i = 20; i>= 0; i--){
    printf("%d", (num >>i) & 1);
  }
  printf("\n");
}
  int main () {
    int num = 12;
    printf("Número original: %d\n", num);
    exibirBits(num);

    int deslocamentoEsquerda = num << 1;
    printf ("deslocamentoEsquerda ( << 1): %d\n", deslocamentoEsquerda);
      exibirBits(deslocamentoEsquerda);
return 0;
  }
