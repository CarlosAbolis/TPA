/*
Função: Ler um número de 1 à 7 e exibir o dia da semana correspondente.
Autor: Carlos Alberto Gonçalves da Silva Neto
Data de criação: 2019/12/01
Data de finalização: 2019/12/03
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	int escolha = 0;
	setlocale(LC_ALL, "");
	printf("Escolha um número correspondente ao dia da semana:\n");
	printf("\n+-----------------+\n");
	printf("|1. Domingo       |\n");
	printf("|2. Segunda-Feira |\n");
	printf("|3. Terça-Feira   |\n");
	printf("|4. Quarta-Feira  |\n");
	printf("|5. Quinta-Feira  |\n");
	printf("|6. Sexta-Feira   |\n");
	printf("|7. Sabádo        |\n");
	printf("+-----------------+\n\n");
	scanf("%i", &escolha);
	switch(escolha){
		case 1:
			printf("\nDomingo\n\n");
			break;
		case 2:
			printf("\nSegunda-Feira\n\n");
			break;
		case 3:
			printf("\nTerça-Feira\n\n");
			break;
		case 4:
			printf("\nQuarta-Feira\n\n");
			break;
		case 5:
			printf("\nQuinta-Feira\n\n");
			break;
		case 6:
			printf("\nSexta-Feira\n\n");
			break;
		case 7:
			printf("\nSabádo\n\n");
			break;
		default:
			printf("\nNúmero Inválido\n\n");
			break;
	}
	system("pause");
}
