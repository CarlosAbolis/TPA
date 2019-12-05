/*
Função: Exibe o fatorial de um valor digitado.
Autor: Carlos Alberto Gonçalves da Silva Neto
Data de criação: 2019/12/01
Data de finalização: 2019/12/05
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	setlocale(LC_ALL, "");
	int numero1 = 1, numero2 = 0, numero3 = 1;
	printf("Insira um número \n");
	scanf("%i", &numero2);
	while(numero1 <= numero2){
		numero3 = numero3 * numero1;
		numero1 = numero1 + 1;
	}
	printf("\nFatorial do número inserido: %i\n\n", numero3);
	system("pause");	
}
