// Crie uma estrutura Polinomio que armazene os coeficientes de um polinômio de 2º grau. Calcule as raízes (use a fórmula de Bhaskara).

#include<stdio.h>
#include<math.h>

struct Polinomio {
	float a, b, c;
};

int main(){
	
	float delta, x1, x2;
	struct Polinomio polinomio;
	printf("---Polinomio---\n");
	
	do{
		printf("Insira coeficiente 'a': ");
		scanf("%f", &polinomio.a);
		if (polinomio.a == 0){
			printf("Coeficiente 'a' nao pode ser zero!");
		}
	}while(polinomio.a == 0);
	
	printf("Insira coeficiente 'b': ");
	scanf("%f", &polinomio.b);
	printf("Insira coeficiente 'c': ");
	scanf("%f", &polinomio.c);
	
	delta = pow(polinomio.b,2) - 4 * polinomio.a * polinomio.c;
	
	if (delta < 0){
		printf("Polinomio sem raizes reais (delta < 0)!");
		printf("\nDelta = %.2f", delta);
	} else {
		x1 = (-polinomio.b + sqrt(delta)) / (2 * polinomio.a);
		x2 = (-polinomio.b - sqrt(delta)) / (2 * polinomio.a);
		
		printf("\n---Resultado---\n");
		printf("\nPrimeira raiz (x1): %.2f", x1);
		printf("\nSegunda raiz (x2): %.2f", x2);
	}
	return 0;
}
