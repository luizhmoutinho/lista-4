// 11. Crie uma estrutura Atleta com nome e tempo (float) em uma corrida. Leia os dados de 5 atletas e determine o vencedor (menor tempo).

#include <stdio.h>
#include <string.h>

struct Atleta {
    char nome[50];
    float tempo;
};

int main() {
    struct Atleta atletas[5];
    int i, vencedor = 0;

    for (i = 0; i < 5; i++) {
        printf("Nome do atleta %d: ", i + 1);
        scanf(" %[^\n]", atletas[i].nome);
        printf("Tempo do atleta %d: ", i + 1);
        scanf("%f", &atletas[i].tempo);
    }

    for (i = 1; i < 5; i++) {
        if (atletas[i].tempo < atletas[vencedor].tempo) {
            vencedor = i;
        }
    }

    printf("Vencedor: %s com tempo %.2f segundos\n", atletas[vencedor].nome, atletas[vencedor].tempo);
    return 0;
}
