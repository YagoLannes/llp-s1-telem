#include <stdio.h>

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
