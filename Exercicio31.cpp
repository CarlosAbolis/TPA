/*
Função: Exibe a tabuada do número inserido.
Autor: Carlos Alberto Gonçalves da Silva Neto
Data de criação: 2019/12/01
Data de finalização: 2019/12/01
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	int numero1 = 0, numero2 = 0;
	setlocale(LC_ALL, "");
	printf("Insira um número: \n");
	scanf("%i", &numero2);
	for(int numero1 = 0; numero1 <=10 ; numero1++){
		printf("%i x %i = %i \n", numero1, numero2 ,numero1 * numero2);
	}
	system("pause");
}
