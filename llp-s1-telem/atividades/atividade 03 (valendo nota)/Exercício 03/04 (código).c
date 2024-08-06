#include <stdio.h>

void exibirBits(unsigned int num) {
    for (int i = 31; i >= 0; i--) {
        (num & (1 << i)) ? printf("1") : printf("0");
    }
    printf("\n");
}

int main() {
    unsigned int num1, num2;

    printf("Digite o primeiro número: ");
    scanf("%u", &num1);

    printf("Digite o segundo número: ");
    scanf("%u", &num2);

    printf("Bits do primeiro número: ");
    exibirBits(num1);

    printf("Bits do segundo número: ");
    exibirBits(num2);

    unsigned int resultadoAnd = num1 & num2;
    printf("Resultado da operação AND: ");
    exibirBits(resultadoAnd);

    unsigned int resultadoOr = num1 | num2;
    printf("Resultado da operação OR: ");
    exibirBits(resultadoOr);

    unsigned int resultadoXor = num1 ^ num2;
    printf("Resultado da operação XOR: ");
    exibirBits(resultadoXor);

    return 0;
}#include <stdio.h>

int main(void) {
  int x;
  printf("Insira sua pontuação: ");
  scanf("%d", &x);
  if(x>=0 && x<=10) {
  printf("Insuficiente");
  } else if(x>=11 && x<=40) {
    printf("Regular");
  } else if(x>=41 && x<=70) {
    printf("Bom");
  } else if(x>=71 && x<=90) {
    printf("Otimo");
  } else if(x>=91 && x<=100) {
    printf("Excelente");
  }
  return 0;
}
