//5. Crie uma estrutura Ponto com coordenadas x e y (float). Leia dois pontos e calcule a distância entre eles.

#include<stdio.h>
#include<math.h>

struct Ponto{
	float x, y;
};

int main(){
	
	float distancia;
	struct Ponto p1, p2;
	
	printf("Insira as coordenadas do primeiro ponto (x y):\n");
	scanf("%f %f", &p1.x, &p2.y);
	printf("Insira as coordenadas do segundo ponto (x y):\n");
	scanf("%f %f", &p2.x, &p2.y);
	
	distancia = sqrt(pow(p2.x - p1.x, 2) + pow(p2.y - p1.y, 2));
	
	printf("\n---Resultado---\n");
	printf("A distancia entre os dois pontos informados: %.2f", distancia);
	return 0;
}