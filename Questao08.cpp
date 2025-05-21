//8. Crie uma estrutura Livro com título, autor e ano de publicação. Leia e exiba os dados de 3 livros.

#include<stdio.h>

struct Livro{
	char titulo[50], autor[50];
	int publicacao;
};

int main(){
	
	struct Livro livro[3];
	printf("---Cadastro de Livros---\n");
	for (int i = 0; i < 3; i++){
		printf("\nLivro %d\n", i+1);
		printf("Titulo: ");
		fgets(livro[i].titulo, sizeof(livro[i].titulo), stdin);
		printf("Autor: ");
		fgets(livro[i].autor, sizeof(livro[i].autor), stdin);
		printf("Ano de publicacao: ");
		scanf("%d", &livro[i].publicacao);
		getchar();
	}
	
	printf("\n---Livros cadastrados---\n");
	for(int i = 0; i < 3; i++){
		printf("\nLivro %d\n", i+1);
		printf("Titulo: %s", livro[i].titulo);
		printf("Autor: %s", livro[i].autor);
		printf("Ano de publicacao: %d\n", livro[i].publicacao);
	}
	return 0;
}