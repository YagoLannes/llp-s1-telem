#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_PRODUTOS 100

typedef struct {
    int codigo;
    char descricao[100];
    float valor_unitario;
    int quantidade_estoque;
} Produto;

Produto produtos[MAX_PRODUTOS];
int total_produtos = 0;

void cadastrarProduto() {
    if (total_produtos >= MAX_PRODUTOS) {
        printf("Limite de produtos alcançado.\n");
        return;
    }

    Produto p;
    printf("Cadastrar Produto:\n");
    printf("Código: ");
    scanf("%d", &p.codigo);
    printf("Descrição: ");
    getchar(); // Limpar o buffer
    fgets(p.descricao, sizeof(p.descricao), stdin);
    p.descricao[strcspn(p.descricao, "\n")] = 0; // Remover nova linha
    printf("Valor Unitário: ");
    scanf("%f", &p.valor_unitario);
    printf("Quantidade em Estoque: ");
    scanf("%d", &p.quantidade_estoque);

    produtos[total_produtos++] = p;
    printf("Produto cadastrado com sucesso!\n");
}

void consultarProduto() {
    int codigo;
    printf("Consultar Produto para Alteração:\n");
    printf("Código: ");
    scanf("%d", &codigo);

    for (int i = 0; i < total_produtos; i++) {
        if (produtos[i].codigo == codigo) {
            printf("Produto encontrado!\n");
            printf("Código: %d\n", produtos[i].codigo);
            printf("Descrição: %s\n", produtos[i].descricao);
            printf("Valor Unitário: %.2f\n", produtos[i].valor_unitario);
            printf("Quantidade em Estoque: %d\n", produtos[i].quantidade_estoque);

            printf("Novos dados (deixe em branco para manter):\n");
            printf("Descrição: ");
            char nova_descricao[100];
            getchar();
            fgets(nova_descricao, sizeof(nova_descricao), stdin);
            if (strlen(nova_descricao) > 1) {
                nova_descricao[strcspn(nova_descricao, "\n")] = 0;
                strcpy(produtos[i].descricao, nova_descricao);
            }

            printf("Valor Unitário: ");
            float novo_valor;
            if (scanf("%f", &novo_valor) == 1) {
                produtos[i].valor_unitario = novo_valor;
            }

            printf("Quantidade em Estoque: ");
            int nova_quantidade;
            if (scanf("%d", &nova_quantidade) == 1) {
                produtos[i].quantidade_estoque = nova_quantidade;
            }

            printf("Produto alterado com sucesso!\n");
            return;
        }
    }
    printf("Produto não encontrado.\n");
}

void listarProdutos() {
    printf("Lista de Produtos:\n");
    for (int i = 0; i < total_produtos; i++) {
        float valor_estoque = produtos[i].valor_unitario * produtos[i].quantidade_estoque;
        printf("Código: %d, Descrição: %s, Valor Unitário: %.2f, Quantidade em Estoque: %d, Valor Total em Estoque: %.2f\n",
               produtos[i].codigo, produtos[i].descricao, produtos[i].valor_unitario, produtos[i].quantidade_estoque, valor_estoque);
    }
}

void excluirProduto() {
    int codigo;
    printf("Exclusão do Produto:\n");
    printf("Código: ");
    scanf("%d", &codigo);

    for (int i = 0; i < total_produtos; i++) {
        if (produtos[i].codigo == codigo) {
            printf("Produto encontrado:\n");
            printf("Código: %d\n", produtos[i].codigo);
            printf("Descrição: %s\n", produtos[i].descricao);
            printf("Valor Unitário: %.2f\n", produtos[i].valor_unitario);
            printf("Quantidade em Estoque: %d\n", produtos[i].quantidade_estoque);

            char resposta;
            printf("Deseja realmente excluir o produto? (s/n): ");
            getchar(); // Limpar o buffer
            scanf("%c", &resposta);

            if (resposta == 's' || resposta == 'S') {
                // Move todos os produtos para preencher o vazio
                for (int j = i; j < total_produtos - 1; j++) {
                    produtos[j] = produtos[j + 1];
                }
                total_produtos--;
                printf("Produto excluído com sucesso!\n");
            } else {
                printf("Exclusão cancelada.\n");
            }
            return;
        }
    }
    printf("Produto não encontrado.\n");
}

int main() {
    int opcao;

    do {
        printf("\nMenu:\n");
        printf("1. Cadastrar Produto\n");
        printf("2. Consultar Produto para Alteração\n");
        printf("3. Listar todos os produtos\n");
        printf("4. Exclusão do Produto\n");
        printf("5. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarProduto();
                break;
            case 2:
                consultarProduto();
                break;
            case 3:
                listarProdutos();
                break;
            case 4:
                excluirProduto();
                break;
            case 5:
                printf("Saindo do programa...\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    } while (opcao != 5);

    return 0;
}
