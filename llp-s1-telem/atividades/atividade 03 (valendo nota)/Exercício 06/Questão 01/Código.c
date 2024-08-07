    #include <stdio.h>

    int main() {
        int numeros[5];
        for (int i = 0; i < 5; i++) {
            printf("Digite o número %d: ", i+1);
            scanf("%d", &numeros[i]);
        }
        int soma = 0;
        for (int i = 0; i < 5; i++) {
            soma += numeros[i];
        }
        printf("A soma dos números é: %d\n", soma);

        return 0;
    }
