//2. Crie uma estrutura Retangulo com largura e altura (float). Calcule e exiba a área e o perímetro.

#include<stdio.h>

struct Retangulo{
	float largura;
	float altura;
};

int main(){
	
	float area, perimetro;
	struct Retangulo r1;
	
	printf("Insira a largura do retangulo: ");
	scanf("%f", &r1.largura);
	printf("\nInsira a altura do retangulo: ");
	scanf("%f", &r1.altura);
	
	area = r1.largura * r1.altura;
	perimetro = 2 * (r1.largura + r1.altura);
	
	printf("\n---Resultados---\n");
	printf("Area = %.2f", area);
	printf("\nPerimetro = %.2f", perimetro);
	return 0;
}
