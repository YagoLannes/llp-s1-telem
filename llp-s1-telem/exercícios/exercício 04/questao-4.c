#include <stdio.h>

int main(void) {
  int num1, num2, maior;
  printf("Digite o primeiro número: ");
  scanf("%d", &num1);
  printf("Digite o segundo número: ");
  scanf("%d", &num2);
  maior = (num1 > num2)? num1 : num2;
  printf("O maior número é: %d", maior);
}
