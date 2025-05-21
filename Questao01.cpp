//1. Crie uma estrutura Pessoa com nome (string), idade (int) e altura (float). Leia os dados de uma pessoa e exiba-os.

#include<stdio.h>

struct Pessoa{
	char nome[50];
	int idade;
	float altura;
};

int main(){
	struct Pessoa p1;
	printf("Insira seu nome: ");
	fgets(p1.nome, sizeof(p1.nome), stdin);
	
	printf("Insira sua idade: ");
	scanf("%d", &p1.idade);
	
	printf("Insira sua altura: ");
	scanf("%f", &p1.altura);
	
	printf("\n---Dados da Pessoa---\n");
	printf("Nome: %s", p1.nome);
	printf("Idade: %d\n", p1.idade);
	printf("Altura: %.2f\n", p1.altura);
	return 0;
}
