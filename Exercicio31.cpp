/*
Fun��o: Exibe a tabuada do n�mero inserido.
Autor: Carlos Alberto Gon�alves da Silva Neto
Data de cria��o: 2019/12/01
Data de finaliza��o: 2019/12/01
*/

#include <stdio.h>
#include <windows.h>
#include <locale.h>
#include <stdlib.h>

int main(){
	int numero1 = 0, numero2 = 0;
	setlocale(LC_ALL, "");
	printf("Insira um n�mero: \n");
	scanf("%i", &numero2);
	for(int numero1 = 0; numero1 <=10 ; numero1++){
		printf("%i x %i = %i \n", numero1, numero2 ,numero1 * numero2);
	}
	system("pause");
}
