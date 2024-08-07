#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int numeroSecreto;
    int tentativa;
    int continuar = 1;

    srand(time(NULL));
    numeroSecreto = rand() % 100 + 1;

    do {
        printf("Adivinhe um número entre 1 e 100 (-1 para sair): ");
        scanf("%d", &tentativa);

        if (tentativa == -1) {
            printf("Você desistiu! O número secreto era %d.\n", numeroSecreto);
            continuar = 0;
        } else if (tentativa < numeroSecreto) {
            printf("Seu palpite é baixo! Tente novamente.\n");
        } else if (tentativa > numeroSecreto) {
            printf("Seu palpite é alto! Tente novamente.\n");
        } else {
            printf("Parabéns! Você acertou o número secreto %d.\n", numeroSecreto);
            continuar = 0;
        }
    } while (continuar);

    return 0;
}
