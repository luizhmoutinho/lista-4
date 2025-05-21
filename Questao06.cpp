//6. Crie uma estrutura Aluno com nome, matricula e 3 notas. Calcule a media e exiba os dados do aluno.

#include<stdio.h>
#include<string.h>

struct Aluno{
	char nome[50], status[15];
	int matricula;
	float nota1, nota2, nota3, media;
};

int main(){
	
	struct Aluno aluno;
	printf("Insira o nome do Aluno: ");
	fgets(aluno.nome, sizeof(aluno.nome), stdin);
	printf("\nInsira a matricula do Aluno: ");
	scanf("%d", &aluno.matricula);
	
	do{
		printf("\nInsira a nota 1 do Aluno: ");
		scanf("%f", &aluno.nota1);
		if (aluno.nota1 < 0 || aluno.nota1 > 10){
			printf("\nNota invalida!");
			printf("\nInserir nota entre 0 a 10");
		}
	} while (aluno.nota1 < 0 || aluno.nota1 > 10);
	
	do{
		printf("\nInsira a nota 2 do Aluno: ");
		scanf("%f", &aluno.nota2);
		if (aluno.nota2 < 0 || aluno.nota2 > 10){
			printf("\nNota invalida!");
			printf("\nInserir nota entre 0 a 10");
		}
	} while (aluno.nota2 < 0 || aluno.nota2 > 10);
	
	do{
		printf("\nInsira a nota 3 do Aluno: ");
		scanf("%f", &aluno.nota3);
		if (aluno.nota3 < 0 || aluno.nota3 > 10){
			printf("\nNota invalida!");
			printf("\nInserir nota entre 0 a 10");
		}
	} while (aluno.nota3 < 0 || aluno.nota3 > 10);
	
	aluno.media = (aluno.nota1 + aluno.nota2 + aluno.nota3) /3;
	if (aluno.media > 6){
		strcpy(aluno.status, "Aprovado!");
	} else {
		strcpy(aluno.status, "Reprovado!");
	}
	
	printf("\n---Relatorio---\n");
	printf("\nNome: %s", aluno.nome);
	printf("\nMatricula: %d", aluno.matricula);
	printf("\nMedia: %.1f", aluno.media);
	printf("\nStatus: %s", aluno.status);
	return 0;
}
