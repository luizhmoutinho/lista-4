//12.Crie uma estrutura ContaBancaria com número da conta, nome do titular e saldo. Implemente funções para depositar, sacar e exibir saldo.

#include<stdio.h>

struct contaBancaria{
	int numeroConta;
	char nomeTitular[50];
	float saldo;
};

void depositar(struct contaBancaria *conta){
	float valor;
	printf("\n---Deposito---\n");
	do{
		printf("\nInforme o valor a ser depositado: ");
		scanf("%f", &valor);
		if (valor < 0){
			printf("\nValor invalido!");
		}
	} while(valor < 0);
	conta->saldo += valor;
	printf("\nDeposito feito com sucesso!");
}

void sacar(struct contaBancaria *conta){
	float valor;
	printf("\n---Saque---\n");
	if (conta->saldo == 0){
		printf("\nSem valor para saque!");
	} else {
		do{
			printf("\nInforme o valor a ser sacado: ");
			scanf("%f", &valor);
			if (valor > conta->saldo){
				printf("\nValor invalido!");
			}
		}while(valor > conta->saldo);
	conta->saldo -= valor;
	printf("\nSaque feito com sucesso!");
	}
}

void exibir(struct contaBancaria conta){
	printf("\n---Dados da Conta---\n");
	printf("\nNumero da conta: %d", conta.numeroConta);
	printf("\nNome do titular: %s", conta.nomeTitular);
	printf("\nSaldo da conta: R$ %.2f", conta.saldo);
}

int main(){
	
	struct contaBancaria conta;
	int escolha;
	
	printf("---Primeiro acesso---\n");
	printf("Escolha um numero para a sua conta: ");
	scanf("%d", &conta.numeroConta);
	getchar();
	printf("Insira seu nome: ");
	fgets(conta.nomeTitular, sizeof(conta.nomeTitular), stdin);
	conta.saldo = 0.00;
	
	printf("\nSeu saldo inicial: R$ %.2f\n", conta.saldo);
	
	do{
		printf("\n---Menu---\n");
		do{
			printf("\nSelecione a opcao desejada!");
			printf("\n1 - Depositar");
			printf("\n2 - Sacar");
			printf("\n3 - Exibir");
			printf("\n4 - Sair");
			printf("\nOpcao desejada: ");
			scanf("%d", &escolha);
			if (escolha < 1 || escolha > 4){
				printf("\nOpcao invalida!");
			}
		}while(escolha < 1 || escolha > 4);
		
		switch(escolha){
			case 1:
				depositar(&conta);
				break;
			case 2:
				sacar(&conta);
				break;
			case 3:
				exibir(conta);
				break;
			case 4:
				printf("\nEncerrando...");
				break;
			default:
				printf("\nOpcao invalida!");
				break;
		}
	}while(escolha != 4);
	return 0;
}
