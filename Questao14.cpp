// 14. Melhore o exercício 9 (Contato) permitindo também excluir e buscar contatos por nome.

#include <stdio.h>
#include <string.h>

struct Contato {
    char nome[50];
    char telefone[20];
    char email[50];
};

int main() {
    struct Contato contatos[10];
    int total = 0;
    int opcao;

    do {
        printf("\nMenu:\n");
        printf("1. Adicionar contato\n");
        printf("2. Listar contatos\n");
        printf("3. Buscar contato por nome\n");
        printf("4. Excluir contato por nome\n");
        printf("0. Sair\n");
        printf("Escolha: ");
        scanf("%d", &opcao);

        if (opcao == 1 && total < 10) {
            printf("Nome: ");
            scanf(" %[^\n]", contatos[total].nome);
            printf("Telefone: ");
            scanf(" %[^\n]", contatos[total].telefone);
            printf("Email: ");
            scanf(" %[^\n]", contatos[total].email);
            total++;
        } else if (opcao == 2) {
            for (int i = 0; i < total; i++) {
                printf("\nContato %d:\n", i + 1);
                printf("Nome: %s\n", contatos[i].nome);
                printf("Telefone: %s\n", contatos[i].telefone);
                printf("Email: %s\n", contatos[i].email);
            }
        } else if (opcao == 3) {
            char busca[50];
            int achou = 0;
            printf("Digite o nome para buscar: ");
            scanf(" %[^\n]", busca);
            for (int i = 0; i < total; i++) {
                if (strcmp(contatos[i].nome, busca) == 0) {
                    printf("Encontrado:\n");
                    printf("Telefone: %s\n", contatos[i].telefone);
                    printf("Email: %s\n", contatos[i].email);
                    achou = 1;
                    break;
                }
            }
            if (!achou)
                printf("Contato não encontrado.\n");
        } else if (opcao == 4) {
            char exclui[50];
            printf("Digite o nome para excluir: ");
            scanf(" %[^\n]", exclui);
            int encontrado = 0;
            for (int i = 0; i < total; i++) {
                if (strcmp(contatos[i].nome, exclui) == 0) {
                    for (int j = i; j < total - 1; j++) {
                        contatos[j] = contatos[j + 1];
                    }
                    total--;
                    encontrado = 1;
                    printf("Contato excluído com sucesso.\n");
                    break;
                }
            }
            if (!encontrado)
                printf("Contato não encontrado.\n");
        } else if (opcao != 0) {
            printf("Opção inválida!\n");
        }
    } while (opcao != 0);

    return 0;
}
