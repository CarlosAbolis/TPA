/*
Função: Ler e exibir a média de 50 números.
Autor: Carlos Alberto Gonçalves da Silva Neto
Data de criação: 2019/12/01
Data de finalização: 2019/12/01
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "");
	float numero = 0, x = 0, i = 0;
	printf("O programa vai ler 50 números e exibir a média entre eles. \n");
	for(i = 0; i < 50 ; i++){
		printf("Insira um número: \n");
		scanf("%f", &numero);
		x = x + numero;
	}
	printf("A média dos números inseridos é: %f", x/50);
	system("pause");
}


