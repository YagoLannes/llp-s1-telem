#include <stdio.h>

int main() {
    int soma = 0; 
    int i; 

    
    for (i = 1; i <= 10; i++) {
        soma += i; 
    }

    printf("A soma dos primeiros 10 números inteiros positivos é: %d\n", soma);

    return 0;
}
