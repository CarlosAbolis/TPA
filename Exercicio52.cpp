/*
Fun��o: Exibe o fatorial de um valor digitado.
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
	int numero1 = 1, numero2 = 0, numero3 = 1;
	printf("Insira um n�mero \n");
	scanf("%i", &numero2);
	while(numero1 <= numero2){
		numero3 = numero3 * numero1;
		numero1 = numero1 + 1;
	}
	printf("\nFatorial do n�mero inserido: %i\n\n", numero3);
	system("pause");	
}
