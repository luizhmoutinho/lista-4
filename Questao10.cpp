//10 . Crie uma estrutura Triangulo com 3 lados (float). Verifique se os lados formam um triângulo válido e, se sim, calcule seu perímetro.
#include<stdio.h>

struct Triangulo {
	float l1, l2, l3;
};

int main(){
	
	struct Triangulo t1;
	bool status;
	float perimetro;
	
	do{
		printf("Insira os valores dos 3 lados do triangulo (lado 1,2,3):\n");
		scanf("%f %f %f", &t1.l1, &t1.l2, &t1.l3);
		
		if (t1.l1 + t1.l2 > t1.l3 && t1.l1 + t1.l3 > t1.l2 && t1.l2 + t1.l3 > t1.l1){
			status = false;
			perimetro = t1.l1 + t1.l2 + t1.l3;
			printf("O perimetro: %.2f", perimetro);
		} else {
			printf("\nTriangulo invalido!\n");
			status = true;
		}
	} while(status); // enquanto "true", o loop não encerra
	
	return 0;
}
