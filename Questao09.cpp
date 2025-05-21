//9. Crie uma estrutura Contato com nome, telefone e email. Implemente um menu para adicionar e listar contatos (vetor de até 10 contatos).

#include<stdio.h>

struct Contato{
	char nome[50], telefone[50], email[50];
};

int main(){
	
	struct Contato contato[10];
	int cont = 0, opcao;
	
	do{
		printf("Qual opcao deseja executar?\n");
		printf("1 - Adicionar contato\n");
		printf("2 - Listar contatos\n");
		printf("3 - Encerrar\n");
		scanf("%d", &opcao);
		getchar();
		
		switch(opcao){
			case 1:
				if(cont >= 10){
					printf("Lista cheia!");
				} else {
					printf("Nome: ");
					fgets(contato[cont].nome, sizeof(contato[cont].nome), stdin);
					printf("Telefone: ");
					fgets(contato[cont].telefone, sizeof(contato[cont].telefone), stdin);
					printf("Email: ");
					fgets(contato[cont].email, sizeof(contato[cont].email), stdin);
					cont++;
					printf("Contato salvo!");
				}
				break;
			case 2:
				if(cont == 0){
					printf("A lista esta vazia!\n");
				} else {
					printf("\n---Lista de contatos---\n");
					for(int i = 0; i < cont; i++){
						printf("Contato %d", i+1);
						printf("\nNome: %s", contato[i].nome);
						printf("\nTelefone: %s", contato[i].telefone);
						printf("\nEmail: %s", contato[i].email);
					}
				}
				break;
			case 3:
				printf("Cadastros terminados");
				break;
			default:
				printf("Opção invalida");
				break;
		}
	} while (opcao != 3);
	return 0;
}
