#include <stdio.h>

int main() {
    int num1, num2;
    
    printf("Digite o primeiro número inteiro: ");
    scanf("%d", &num1);

    printf("Digite o segundo número inteiro: ");
    scanf("%d", &num2);

    int soma = num1 + num2;
    printf("A soma é: %d\n", soma);

    int subtracao = num1 - num2;
    printf("A subtração é: %d\n", subtracao);

    int multiplicacao = num1 * num2;
    printf("A multiplicação é: %d\n", multiplicacao);

    if (num2 != 0) {
        int divisao = num1 / num2;
        printf("A divisão é: %d\n", divisao);
    } else {
        printf("Erro: não é possível dividir por zero!\n");
    }

    return 0;
}
