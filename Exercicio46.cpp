/*
Fun��o: Card�pio de um restaurante.
Autor: Carlos Alberto Gon�alves da Silva Neto
Data de cria��o: 2019/12/01
Data de finaliza��o: 2019/12/03
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	int escolha = 0;
	setlocale(LC_ALL, "");
	printf("\nBem-Vindo � nossa lanchonete!\n");
	printf("+----------------------------------------------------------+\n");
	printf("|C�digo  |        1        |     2     |    7     |   15   |\n");
	printf("+----------------------------------------------------------+\n"); 
	printf("|Lanche  | Cachorro-Quente | X-Salada  | X-Burger | X-Tudo |\n ");
	printf("+----------------------------------------------------------+\n");
	printf("|Pre�o   |   	R$3,50     |  R$5,00   |  R$8,90  | R$12,70|\n");
	printf("+----------------------------------------------------------+\n\n");
	printf("\nDigite o n�mero correspondente ao seu pedido:\n");
	scanf("%i", &escolha);
	switch(escolha){
		case 1:
			printf("\nCachorro-Quente - Valor: R$3,50\n\n");
			break;
		case 2:
			printf("\nX-Salada - Valor: R$5,00\n\n");
			break;
		case 7:
			printf("\nX-Burguer - Valor: R$8,90\n\n");
			break;
		case 15:
			printf("\nX-Tudo - Valor: R$12,70\n\n");
			break;
		default:
			printf("\nValor inv�lido\n\n");
			break;
	}
	system("pause");
}
	
	
