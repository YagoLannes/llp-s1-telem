#include <stdio.h>

int main() {
    int a, b;

    printf("Digite o primeiro número: ");
    scanf("%d", &a);

    printf("Digite o segundo número: ");
    scanf("%d", &b);

    a = a + b;
    b = a - b;
    a = a - b;

    printf("Valor de a: %d\n", a);
    printf("Valor de b: %d\n", b);

    return 0;
}
