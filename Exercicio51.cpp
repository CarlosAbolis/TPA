/*
Fun��o: Exibe os n�meros pares entre dois valores inseridos.
Autor: Carlos Alberto Gon�alves da Silva Neto
Data de cria��o: 2019/12/01
Data de finaliza��o: 2019/12/05
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "");
	int numero1 = 0, numero2 = 0, alternar;
	printf("Insira um 1� n�mero: \n");
	scanf("%i", &numero1);
	printf("\nInsira um 2� n�mero: \n");
	scanf("%i", &numero2);
	if(numero1 > numero2){
		alternar = numero2;
		numero2 = numero1;
		numero1 = alternar;
	}
	printf("\nN�meros pares:\n\n");
	while(numero1 <= numero2){
		if(numero1 % 2 == 0){
			printf("%i \n", numero1);
		}
		numero1 = numero1 + 1;
	}
	system("pause");
}

