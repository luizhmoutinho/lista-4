//3. Crie uma estrutura Produto com nome (string), preço (float) e quantidade (int). Calcule e exiba o valor total em estoque (preço × quantidade).

#include<stdio.h>

struct Produto{
	char nome[];
	float preco;
	int quantidade;
};

int main(){
	
	float valor_total = 0;
	struct Produto p1;
	
	printf("Qual o nome do produto: ");
	scanf("%s", &p1.nome);
	printf("\nInsira o preco individual o produto: ");
	scanf("%f", &p1.preco);
	printf("\nInsira o total em estoque do produto: ");
	scanf("%d", &p1.quantidade);
	
	valor_total = p1.preco * p1.quantidade;
	
	printf("\n---Relatorio de Estoque---\n");
	printf("Produto: %s", p1.nome);
	printf("Valor total em estoque: R$ %.2f", valor_total);
	return 0;
}
