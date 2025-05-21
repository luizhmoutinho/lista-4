//7. Crie uma estrutura Circulo com raio (float). Calcule e exiba a área e a circunferência (use p = 3.14).
// A = pi * r²
// C = 2 * pi * r

#include<stdio.h>
#include<math.h>
#define pi 3.14

struct Circulo{
	float raio;
};

int main(){
	
	float area, circunferencia;
	struct Circulo c1;
	
	printf("Insira o raio do circulo: ");
	scanf("%f", &c1.raio);
	
	area = pi * pow(c1.raio, 2);
	circunferencia = 2 * pi * c1.raio;
	
	printf("\n---Resultado---\n");
	printf("\nArea do circulo: %.2f", area);
	printf("\nCircunferencia do circulo: %.2f", circunferencia);
	return 0;
}
