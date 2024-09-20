#include <stdio.h>
#include <string.h>

#define MAX_PRODUTOS 100
#define MAX_DESCRICAO 50

typedef struct {
    int codigo;
    char descricao[MAX_DESCRICAO];
    float valorUnitario;
    int qtdEstoque;
    float valorEstoque;
} Produto;

Produto produtos[MAX_PRODUTOS];
int numProdutos = 0;

void mostrarMenu() {
    printf("----------------------------------------------------------------------\n");
    printf("Sistema de Estoque\n");
    printf("----------------------------------------------------------------------\n");
    printf("1) Entrada de Produtos\n");
    printf("2) Listar os Produtos\n");
    printf("3) Valor Total do Estoque\n");
    printf("4) Fim\n");
    printf("Opção: __\n");
    printf("----------------------------------------------------------------------\n");
}

void entradaProduto() {
    Produto produto;
    printf("----------------------------------------------------------------------\n");
    printf("Entrada de Cadastro de Produtos\n");
    printf("----------------------------------------------------------------------\n");
    printf("Código: ");
    scanf("%d", &produto.codigo);
    printf("Descrição: ");
    fgets(produto.descricao, MAX_DESCRICAO, stdin);
    produto.descricao[strlen(produto.descricao) - 1] = '\0'; // remover \n
    printf("Valor Unitário: ");
    scanf("%f", &produto.valorUnitario);
    printf("Qtd Estoque: ");
    scanf("%d", &produto.qtdEstoque);
    produto.valorEstoque = produto.valorUnitario * produto.qtdEstoque;
    printf("Valor Estoque: %.2f\n", produto.valorEstoque);
    printf("Digite (1-Para Gravar, 2-Voltar a tela inicial) : ");
    int opcao;
    scanf("%d", &opcao);
    if (opcao == 1) {
        produtos[numProdutos] = produto;
        numProdutos++;
    }
}

void listarProdutos() {
    printf("----------------------------------------------------------------------\n");
    printf("Listagem de Produtos\n");
    printf("----------------------------------------------------------------------\n");
    for (int i = 0; i < numProdutos; i++) {
        printf("Código: %d\n", produtos[i].codigo);
        printf("Descrição: %s\n", produtos[i].descricao);
        printf("Valor Unitário: %.2f\n", produtos[i].valorUnitario);
        printf("Qtd Estoque: %d\n", produtos[i].qtdEstoque);
        printf("Valor Estoque: %.2f\n\n", produtos[i].valorEstoque);
    }
}

float valorTotalEstoque() {
    float total = 0;
    for (int i = 0; i < numProdutos; i++) {
        total += produtos[i].valorEstoque;
    }
    return total;
}

void mostrarValorTotalEstoque() {
    printf("----------------------------------------------------------------------\n");
    printf("Valor Total do Estoque\n");
    printf("----------------------------------------------------------------------\n");
    printf("Valor Total: %.2f\n", valorTotalEstoque());
}

int main() {
    int opcao;
    do {
        mostrarMenu();
        scanf("%d", &opcao);
        switch (opcao) {
            case 1:
                entradaProduto();
                break;
            case 2:
                listarProdutos();
                break;
            case 3:
                mostrarValorTotalEstoque();
                break;
            case 4:
                printf("Fim do programa.\n");
                break;
            default:
                printf("Opção inválida.\n");
        }
    } while (opcao != 4);
    return 0;
}
