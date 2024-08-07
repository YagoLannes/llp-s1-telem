#include <stdio.h>

void imprime_bits(unsigned int num) {
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
    imprime_bits(num1);

    printf("Bits do segundo número: ");
    imprime_bits(num2);

    
    printf("Soma: %u\n", num1 + num2);
    printf("Subtração: %u\n", num1 - num2);
    printf("Multiplicação: %u\n", num1 * num2);
    printf("Divisão: %u\n", num1 / num2);

   
    printf("AND: %u\n", num1 & num2);
    printf("OR: %u\n", num1 | num2);
    printf("XOR: %u\n", num1 ^ num2);

    return 0;
}
