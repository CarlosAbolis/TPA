/*
Fun��o: Ler um valor e exibir os n�meros primos de 1 at� o valor inserido.
Autor: Carlos Alberto Gon�alves da Silva Neto
Data de cria��o: 2019/12/01
Data de finaliza��o: 2019/12/03
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "");
	int numero = 0, valor = 0, um = 0, primo = 0;
	printf("Insira um n�mero: \n");
	scanf("%i",&numero);
	printf("N�meros primos de 1 at� o valor inserido: \n");
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

