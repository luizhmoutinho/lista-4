// 15.  Crie estruturas para Ponto e Retangulo (usando dois pontos: superior esquerdo e inferior direito). Calcule a área do retângulo e verifique se um terceiro ponto está dentro dele.

#include <stdio.h>

struct Ponto {
    float x, y;
};

struct Retangulo {
    struct Ponto sup_esq;
    struct Ponto inf_dir;
};

int main() {
    struct Retangulo r;
    struct Ponto p;

    printf("Digite o ponto superior esquerdo (x y): ");
    scanf("%f %f", &r.sup_esq.x, &r.sup_esq.y);

    printf("Digite o ponto inferior direito (x y): ");
    scanf("%f %f", &r.inf_dir.x, &r.inf_dir.y);

    float largura = r.inf_dir.x - r.sup_esq.x;
    float altura = r.sup_esq.y - r.inf_dir.y;
    float area = largura * altura;

    printf("Área do retângulo: %.2f\n", area);

    printf("Digite o ponto a verificar (x y): ");
    scanf("%f %f", &p.x, &p.y);

    if (p.x >= r.sup_esq.x && p.x <= r.inf_dir.x &&
        p.y <= r.sup_esq.y && p.y >= r.inf_dir.y) {
        printf("O ponto está dentro do retângulo.\n");
    } else {
        printf("O ponto está fora do retângulo.\n");
    }

    return 0;
}
