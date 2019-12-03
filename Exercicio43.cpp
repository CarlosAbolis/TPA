/*
Função: Ler um valor e exibir os números primos de 1 até o valor inserido.
Autor: Carlos Alberto Gonçalves da Silva Neto
Data de criação: 2019/12/01
Data de finalização: 2019/12/03
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "");
	int numero = 0, valor = 0, um = 0, primo = 0;
	printf("Insira um número: \n");
	scanf("%i",&numero);
	printf("Números primos de 1 até o valor inserido: \n");
	if(numero >= 2){
		printf("\n1  \n2\n");
	}
	for(valor = 3; valor <= numero; valor ++){
		for(um = 2; um < valor; um ++){
			if(valor % um == 0){
				primo = 1;
			}
		}
			if(primo == 0){
			printf("%i\n", valor);
			}
		primo = 0;
	}
}

