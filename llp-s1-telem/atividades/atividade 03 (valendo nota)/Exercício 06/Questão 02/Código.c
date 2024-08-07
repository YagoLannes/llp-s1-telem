#include <stdio.h>

int main() {
    int matriz[3][3];
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("Digite o elemento [%d][%d]: ", i+1, j+1);
            scanf("%d", &matriz[i][j]);
        }
    }
    int soma = 0;
    for (int i = 0; i < 3; i++) {
        soma += matriz[i][i];
    }
    printf("A soma dos elementos da diagonal principal é: %d\n", soma);
    return 0;
}
