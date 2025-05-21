//4. Crie uma estrutura Data com dia, mês e ano (int). Leia uma data e exiba no formato dd/mm/aaaa.

#include<stdio.h>

struct Data{
	int dia, mes, ano;
};

int main(){
	
	struct Data d1;
	
	do{
		printf("Qual o dia: ");
		scanf("%d", &d1.dia);
		if (d1.dia <= 0 || d1.dia > 31){
			printf("Dia invalido!\n");
		}
	} while(d1.dia <= 0 || d1.dia > 31);
	
	do{
		printf("\nQual o mes: ");
		scanf("%d", &d1.mes);
		if(d1.mes <= 0 || d1.mes > 12){
			printf("Mes invalido!\n");
		}
	}while(d1.mes <= 0 || d1.mes > 12);
	
	do{
		printf("\nQual o ano: ");
		scanf("%d", &d1.ano);
		if(d1.ano <= 0){
			printf("Ano invalido!");
		}
	}while(d1.ano <= 0);
	
	printf("\nData: %d/%d/%d", d1.dia, d1.mes, d1.ano);
	return 0;
}
