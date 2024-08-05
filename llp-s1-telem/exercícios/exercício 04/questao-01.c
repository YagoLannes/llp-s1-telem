#include <stdio.h>
int main(){
  int num;
  printf("digite um número inteiro:");
  scanf("%d",&num);

  if (num > 0){
    printf("o número é positivo. \n");
  } else if (num < 0){
    printf("o número é negativo. \n");
  } else { 
    printf("o número é zero. \n");
  return 0;
  }
}
